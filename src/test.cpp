#include "music.h"
#include "AudioFile.h"

using namespace std;

int main() {
	float X_in[N_SAMPLE][N_SENSOR];
	int DOA_src, DOA_interfer;
	float align_out[N_SAMPLE];
	complex_float X_test[N_STFT][N_SENSOR];
	complex_float U_test[N_SENSOR][N_SENSOR];
	float eigval_test[N_SENSOR];

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
//	cout << "########### Autocorrelation Test ##########" << endl;
//	for(int i = 0; i < N_STFT; i++) {
//		for(int j = 0; j < N_SENSOR; j++) {
//			X_test[i][j].real() = i;
//			X_test[i][j].imag() = i+1;
//		}
//	}
//	Autocorrelation(X_test, Rx_test);
//	cout << "result: " << endl;
//	for(int i = 0; i < 4; i++) {
//		for(int j = 0; j < 4; j++) {
//			cout << Rx_test[i][j].real() << "+" << Rx_test[i][j].imag() << "i  ";
//		}
//		cout << endl;
//	}
//	cout << "################# eig Test ################" << endl;
//	complex_float Rx_test[N_SENSOR][N_SENSOR] = {
//		{complex_float(0.0360,0.0000), complex_float(0.0043,0.0011), complex_float(0.0185,0.0009), complex_float(0.0075,0.0013)},
//		{complex_float(0.0043,-0.0011), complex_float(0.0367,0.0000), complex_float(0.0057,0.0013), complex_float(0.0125,0.0007)},
//		{complex_float(0.0185,-0.0009), complex_float(0.0057,-0.0013), complex_float(0.0233,0.0000), complex_float(0.0098,0.0006)},
//		{complex_float(0.0075,-0.0013), complex_float(0.0125,-0.0007), complex_float(0.0098,-0.0006), complex_float(0.0155,0.0000)}
//	};
//	complex_float Rx_test[N_SENSOR][N_SENSOR] = {
//		{complex_float(1,0), complex_float(2,0), complex_float(3,0), complex_float(4,0)},
//		{complex_float(2,0), complex_float(4,0), complex_float(2,0), complex_float(3,0)},
//		{complex_float(3,0), complex_float(2,0), complex_float(3,0), complex_float(2,0)},
//		{complex_float(4,0), complex_float(3,0), complex_float(2,0), complex_float(4,0)}
//	};
//	eig_decompose(Rx_test, U_test, eigval_test);
//	cout << "eigenvalues: ";
//	for(int i = 0; i < 4; i++) {
//		cout << eigval_test[i] << " ";
//	}
//	cout << endl;
//	cout << "eigenvectors: " << endl;
//	for(int i = 0; i < 4; i++) {
//		for(int j = 0; j < 4; j++) {
//			cout << U_test[i][j].real() << "+" << U_test[i][j].imag() << "i  ";
//		}
//		cout << endl;
//	}
	cout << "########### top func test ##########" << endl;
	music(X_in, DOA_src, DOA_interfer);
	return 0;
}
