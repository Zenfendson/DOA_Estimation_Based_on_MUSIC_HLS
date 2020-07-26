#include "music.h"
void fft(float x[N_FREQ]);
void music(float X[N_SAMPLEN][N_SENSOR], int DOA_src, int DOA_interfer, float align_out) {
	
	float FFT_Buffer[N_FREQ];
	float Xl_f[N_STFT][N_FREQ][N_SENSOR];
	float Xj_f[N_FREQ][N_STFT][N_SENSOR];

	for(int l = 0; l < N_STFT; l++) {
		for(int n = 0; n < N_SENSOR; n++) {
			for(int j = 0; j < N_FREQ; j++) {
				FFT_Buffer[j] = X[(l-1)*N_FREQ+j][n];
			}
			fft(FFT_Buffer);
			for(int j = 0; j< N_FREQ; j++) {
				Xj_f[j][l][n] = FFT_Buffer[j];
			}
		}
	}
}