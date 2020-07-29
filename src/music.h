#ifndef __MUSIC_H__
#define __MUSIC_H__

#include <iostream>
#include <cstring>
#include <math.h>
#include "hls/linear_algebra/hls_qrf.h"
#include "hls/linear_algebra/hls_qr_inverse.h"

#define FS 16000
#define N_SENSOR 4
#define SEN_DIST 0.25
#define N_SOURCE 2
#define VELOCITY 340
#define N_SAMPLE 48000
#define N_STFT 50
#define N_FREQ 960
#define PIE 3.1415926

using namespace std;

typedef hls::x_complex<float> complex_float;

// top function
void music(
	float X[N_SAMPLE][N_SENSOR],	// input signal
	int DOA_src,					// DOA of source signal
	int DOA_interfer,				// DOA of interfering signal
	float align_out					// Output aligned signal
);

// sort eigenvalues of autocorrelation matrix Rx
void sort_eigval(
		float eigval[N_SENSOR],		// input: eigenvalues
		int sort_index[N_SENSOR]	// output: sorted index
);

// autocorrelation computing
void Autocorrelation(
		complex_float X[N_STFT][N_SENSOR],		// input: frequency domain signal
		complex_float Rx[N_SENSOR][N_SENSOR]	// output: autocorrelation matrix
);

// eigenvalues and eigenmatrix computing
void eig_decompose(
		complex_float Rx[N_SENSOR][N_SENSOR],	// input: autocorrelation matrix
		complex_float U[N_SENSOR][N_SENSOR],	// output: eigenmatrix
		float eigval[N_SENSOR]				// output: eigenvalues
);

// fast fourier transform
void fft(complex_float X[N_FREQ]);

void qr_decompose(
		complex_float A[N_SENSOR][N_SENSOR],
		complex_float Q[N_SENSOR][N_SENSOR],
		complex_float R[N_SENSOR][N_SENSOR]
);

void inv(
		complex_float A[N_SENSOR][N_SENSOR],
		complex_float invA[N_SENSOR][N_SENSOR],
		int& A_singular
);
#endif
