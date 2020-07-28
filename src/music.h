#ifndef __MUSIC_H__
#define __MUSIC_H__

#include "math.h"
#include <iostream>
#include <cstring>

#define FS 16000
#define N_SENSOR 4
#define SEN_DIST 0.25
#define N_SOURCE 2
#define VELOCITY 340
#define N_SAMPLE 48000
#define N_STFT 50
#define N_FREQ 960
#define PIE 3.1415926

struct complex {
	float real;
	float imag;
};

void music(
	float X[N_SAMPLE][N_SENSOR],	// input signal
	int DOA_src,					// DOA of source signal
	int DOA_interfer,				// DOA of interfering signal
	float align_out					// Output aligned signal
);

void sort_eigval(float eigval[N_SENSOR], int sort_index[N_SENSOR]);
#endif
