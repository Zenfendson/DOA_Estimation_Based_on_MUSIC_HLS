#include "music.h"
#include "math.h"

struct complex {
	float real;
	float imag;
};
struct complex mul_complex(struct complex a, struct complex b) {
	struct complex result;
	result.real = a.real * b.real - a.imag * b.imag;
	result.imag = a.imag * b.real + a.real * b.imag;
	return result;
}
struct complex add_complex(struct complex a, struct complex b) {
	struct complex result;
	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;
	return result;
}
struct complex conjugate(struct complex a) {
	sturct complex result;
	result.real = a.real;
	result.imag = 0 - a.imag;
	return result;
}
void sort_eigval(float eigval[N_SENSOR], int sort_index[N_SENSOR]) {
	int sort_index[N_SENSOR];
	for (int i = 0; i < N_SENSOR; i++) {
		sort_index[i] = i;
	}
	for (int i = 0; i < N_SENSOR - 1; i++) {
		int flag = i;
		for (int j = flag + 1; j < N_SENSOR; j++) {
			if (eigval[sort_index[flag]] > eigval[sort_index[j]]) {
				flag = j;
			}	
		int temp = 0;
		temp = sort_index[flag];
		sort_index[flag] = sort_index[i];
		sort_index[i] = temp;
	}
}
void eig(struct complex Rx[N_SENSOR][N_SENSOR], struct complex U[N_SENSOR][N_SENSOR], struct complex eigval[N_SENSOR]);
void fft(float x[N_FREQ]);
void Autocorrelation(struct complex Rx[N_SENSOR][N_SENSOR], struct complex X[N_STFT][N_SENSOR]) {
	for (int x = 0; x < N_SENSOR; x++) {
		for (int y = 0; y < N_SENSOR; y++) {
			struct complex temp;
			temp.real = 0.0;
			temp.imag = 0.0;
			for(int l = 0; l < N_STFT; l++) {
				temp = add_complex(temp, mul_complex(X[l][x], conjugate(X[l][y])));
			}
			Rx[x][y] = temp / N_STFT;
		}
	}
}
void music(float X[N_SAMPLEN][N_SENSOR], int DOA_src, int DOA_interfer, float align_out) {
	
	struct complex FFT_Buffer[N_FREQ];
	struct complex Xl_f[N_STFT][N_FREQ][N_SENSOR];
	struct complex Xj_f[N_FREQ][N_STFT][N_SENSOR];
	struct complex Autocorr_Buffer[N_STFT][N_SENSOR];
	struct complex Rx[N_SENSOR][N_SENSOR];
	struct complex U[N_SENSOR][N_SENSOR];
	struct complex Un[N_SENSOR][N_SENSOR - N_SOURCE];
	struct complex UU[N_SENSOR][N_SENSOR];
	struct complex AUU[361][N_SENSOR];
	struct complex w[361];
	struct complex P_sm[361];
	float eigval[N_SENSOR];
	int sort_index[N_SENSOR];
	float p[N_SENSOR] = {-0.375, -0.125, 0.125, 0.375};
	float theta[361];
	struct complex a_theta[N_SENSOR][361];
	float fc[N_FREQ];
	struct complex temp;


	for(int j = 0; j < N_FREQ; j++) {
		if (j < N_FREQ/2) {
			fc[j] = j * FS / N_FREQ;
		} else {
			fc[j] = (j - N_FREQ) * FS / N_FREQ;
		}
	}

	for (int i = 0; i < 361; i++) {
		theta[i] = 0.5 * i + 90;
	}

	for(int l = 0; l < N_STFT; l++) {
		for(int n = 0; n < N_SENSOR; n++) {
			for(int j = 0; j < N_FREQ; j++) {
				FFT_Buffer[j].real = X[(l-1)*N_FREQ+j][n];
				FFT_Buffer[j].imag = X[(l-1)*N_FREQ+j][n];
			}
			fft(FFT_Buffer);
			for(int j = 0; j< N_FREQ; j++) {
				Xj_f[j][l][n] = FFT_Buffer[j];
			}
		}
	}

	for(int jj = 0; jj < N_FREQ; jj++) {
		for (int l = 0; l < N_STFT; l++) {
			for (int n = 0; n < N_SENSOR; n++) {
				Autocorr_Buffer[l][n] = Xj_f[j][j][n];
			}
		}
		Autocorrelation(Rx, Autocorr_Buffer);
		eig(Rx, U, eigval);
		sort_eigval(eigval, sort_index);
		for(int x = 0; x < N_SENSOR; x++) {
			for(int y = 0, y < N_SENSOR; y++) {
				if (sort_index[y] == 2) {
					Un[x][0] = U[x][y];
				} else if (sort_index[y] == 3) {
					Un[x][1] = U[x][y];
				}
			}
		}
		for (int x = 0; x < N_SENSOR; x++) {
			for (int y = 0; y < 361; y++) {
				a_theta[x][y].real = cos(2*PIE*fc[jj]*p[x]*sin(theta[y]*PIE/180)/VELOCITY);
				a_theta[x][y].imag = sin(2*PIE*fc[jj]*p[x]*sin(theta[y]*PIE/180)/VELOCITY);
			}
		}

		for(int i = 0; i < N_SENSOR; i++) {
			for(int j = 0; j < N_SENSOR; j++) {
				UU[i][j] = add_complex(mul_complex(Un[i][0], conjugate(Un)[j][0]), mul_complex(Un[i][1], conjugate(Un)[j][1]));
			}
		}
		for(int i = 0; i < 361; i++) {
			for(int j = 0; j < N_SENSOR; j++) {
				temp.real = 0.0;
				temp.imag = 0.0;
				for (int k = 0; k < N_SENSOR; k++) {
					temp = add_complex(temp, mul_complex(conjugate(a_theta)[i][k], UU[k][j]));
				}
				AUU[i][j] = temp;
			}
		}
		for(int i = 0; i < 361; i++) {
			temp.real = 0.0;
			temp.imag = 0.0;
			for (int k = 0; k < N_FREQ; k++) {
				temp = add_complex(temp, mul_complex(AUU[i][k], a_theta[i][k]));
			}
			w[i] = add_complex(w[i], temp);
		}
	}
	for (int i = 0; i < 361; i++) {
		P_sm[i] = 1/w[i];
	}
}