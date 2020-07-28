#include "music.h"
#include "AudioFile.h"

using namespace std;

int main() {
//	cout << "************MUSIC test**************" << endl;
//	cout << "************sort test***************" << endl;
//	float eigval[4] = {1.2, 3.2, 0.5, -0.7};
//	int index[4];
//	sort_eigval(eigval, index);
//	cout << "eigval: " << eigval[0] << ", " << eigval[1] << ", " << eigval[2] << ", " << eigval[3] << endl;
//	cout << "index: " << index[0] << ", " << index[1] << ", " << index[2] << ", " << index[3] << endl;

	cout << "########### audio file read ##########" << endl;
	AudioFile<double> ch1, ch2, ch3, ch4;
	ch1.load ("test_audio/test_2_ch_1.wav");
	ch2.load ("test_audio/test_2_ch_2.wav");
	ch3.load ("test_audio/test_2_ch_3.wav");
	ch4.load ("test_audio/test_2_ch_4.wav");

	float X_in[N_SAMPLE][N_SENSOR];
	int DOA_src, DOA_interfer;
	float align_out[N_SAMPLE];

	for(int i = 0; i < N_SAMPLE; i++) {
		X_in[i][0] = ch1.samples[0][i];
	}
	for(int i = 0; i < N_SAMPLE; i++) {
		X_in[i][1] = ch2.samples[0][i];
	}
	for(int i = 0; i < N_SAMPLE; i++) {
		X_in[i][2] = ch3.samples[0][i];
	}
	for(int i = 0; i < N_SAMPLE; i++) {
		X_in[i][3] = ch4.samples[0][i];
	}
	cout << "########### Autocorrelation Test ##########" << endl;
	complex_float X_test[N_STFT][N_SENSOR];
	complex_float Rx_test[N_SENSOR][N_SENSOR];
	for(int i = 0; i < N_STFT; i++) {
		for(int j = 0; j < N_SENSOR; j++) {
			X_test[i][j].real() = i;
			X_test[i][j].imag() = i+1;
		}
	}
	Autocorrelation(Rx_test, X_test);
	cout << "result: " << endl;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cout << Rx_test[i][j].real() << "+" << Rx_test[i][j].imag() << "i  ";
		}
		cout << endl;
	}


	return 0;
}
