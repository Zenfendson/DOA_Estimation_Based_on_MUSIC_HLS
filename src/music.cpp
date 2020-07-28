#include "music.h"

void sort_eigval(float eigval[N_SENSOR], int sort_index[N_SENSOR]) {
	for (int i = 0; i < N_SENSOR; i++) {
		sort_index[i] = i;
	}
	for (int i = 0; i < N_SENSOR - 1; i++) {
		int flag = i;
		for (int j = flag + 1; j < N_SENSOR; j++) {
			if (eigval[sort_index[flag]] > eigval[sort_index[j]]) {
				flag = j;
			}
		}
		int temp = 0;
		temp = sort_index[flag];
		sort_index[flag] = sort_index[i];
		sort_index[i] = temp;
	}
}
void eig(complex_float Rx[N_SENSOR][N_SENSOR], complex_float U[N_SENSOR][N_SENSOR], float eigval[N_SENSOR]);
void fft(complex_float x[N_FREQ]);
void Autocorrelation(complex_float Rx[N_SENSOR][N_SENSOR], complex_float X[N_STFT][N_SENSOR]) {
	for (int x = 0; x < N_SENSOR; x++) {
		for (int y = 0; y < N_SENSOR; y++) {
			complex_float temp(0.0, 0.0);
			for(int l = 0; l < N_STFT; l++) {
				temp += X[l][x] * x_conj(X[l][y]);
			}
			Rx[x][y] = temp / N_STFT;
		}
	}
}
void music(float X[N_SAMPLE][N_SENSOR], int DOA_src, int DOA_interfer, float align_out[N_SAMPLE]) {
	
	complex_float FFT_Buffer[N_FREQ];
	complex_float Xl_f[N_STFT][N_FREQ][N_SENSOR];
	complex_float Xj_f[N_FREQ][N_STFT][N_SENSOR];
	complex_float Autocorr_Buffer[N_STFT][N_SENSOR];
	complex_float Rx[N_SENSOR][N_SENSOR];
	complex_float U[N_SENSOR][N_SENSOR];
	complex_float Un[N_SENSOR][N_SENSOR - N_SOURCE];
	complex_float UU[N_SENSOR][N_SENSOR];
	complex_float AUU[361][N_SENSOR];
	complex_float w[361];
	complex_float a_theta[N_SENSOR][361];
	complex_float temp;
	float P_sm[361];
	float eigval[N_SENSOR];
	int sort_index[N_SENSOR];
	float p[N_SENSOR] = {-0.375, -0.125, 0.125, 0.375};
	float theta[361];
	float fc[N_FREQ];

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
				FFT_Buffer[j] = X[(l-1)*N_FREQ+j][n];
			}
//			fft(FFT_Buffer);
			for(int j = 0; j< N_FREQ; j++) {
				Xj_f[j][l][n] = FFT_Buffer[j];
			}
		}
	}

	for(int jj = 0; jj < N_FREQ; jj++) {
		for (int l = 0; l < N_STFT; l++) {
			for (int n = 0; n < N_SENSOR; n++) {
				Autocorr_Buffer[l][n] = Xj_f[jj][jj][n];
			}
		}
		Autocorrelation(Rx, Autocorr_Buffer);
//		eig(Rx, U, eigval);
		sort_eigval(eigval, sort_index);
		for(int x = 0; x < N_SENSOR; x++) {
			for(int y = 0; y < N_SENSOR; y++) {
				if (sort_index[y] == 2) {
					Un[x][0] = U[x][y];
				} else if (sort_index[y] == 3) {
					Un[x][1] = U[x][y];
				}
			}
		}
		for (int x = 0; x < N_SENSOR; x++) {
			for (int y = 0; y < 361; y++) {
				a_theta[x][y].real() = cos(2*PIE*fc[jj]*p[x]*sin(theta[y]*PIE/180)/VELOCITY);
				a_theta[x][y].imag() = sin(2*PIE*fc[jj]*p[x]*sin(theta[y]*PIE/180)/VELOCITY);
			}
		}

		for(int i = 0; i < N_SENSOR; i++) {
			for(int j = 0; j < N_SENSOR; j++) {
				UU[i][j] = Un[i][0] * x_conj(Un[j][0]) + Un[i][1] * x_conj(Un[j][1]);
			}
		}
		for(int i = 0; i < 361; i++) {
			for(int j = 0; j < N_SENSOR; j++) {
				temp.real() = 0.0;
				temp.imag() = 0.0;
				for (int k = 0; k < N_SENSOR; k++) {
					temp += x_conj(a_theta[i][k]) * UU[k][j];
				}
				AUU[i][j] = temp;
			}
		}
		for(int i = 0; i < 361; i++) {
			temp.real() = 0.0;
			temp.imag() = 0.0;
			for (int k = 0; k < N_FREQ; k++) {
				temp += AUU[i][k] * x_conj(a_theta[i][k]);
			}
			w[i] += temp;
		}
	}
	for (int i = 0; i < 361; i++) {
		P_sm[i] = 1/w[i].real();
	}
}
