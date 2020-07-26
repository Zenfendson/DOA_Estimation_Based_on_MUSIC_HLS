#include "music.h"
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
	return result
}
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

	for(int j = 0; j < N_FREQ; j++) {
		for (int l = 0; l < N_STFT; l++) {
			for (int n = 0; n < N_SENSOR; n++) {
				Autocorr_Buffer[l][n] = Xj_f[j][j][n];
			}
			Autocorrelation(Rx, Autocorr_Buffer);

		}
	}
}