#ifndef __MUSIC_H__
#define __MUSIC_H__

using namespace std;

#define FS 16000
#define N_SENSOR 4
#define SEN_DIST 0.25
#define N_SOURCE 2
#define VELOCITY 340
#define N_SAMPLE 48000
#define N_STFT 50
#define N_FREQ 960

void music(
	float X[N_SAMPLE][N_SENSOR],	// input signal
	int DOA_src,					// DOA of source signal
	int DOA_interfer,				// DOA of interfering signal
	float align_out					// Output aligned signal
);

#endif