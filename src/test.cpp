#include "music.h"
#include "AudioFile.h"

int main() {
//	cout << "************MUSIC test**************" << endl;
//	cout << "************sort test***************" << endl;
//	float eigval[4] = {1.2, 3.2, 0.5, -0.7};
//	int index[4];
//	sort_eigval(eigval, index);
//	cout << "eigval: " << eigval[0] << ", " << eigval[1] << ", " << eigval[2] << ", " << eigval[3] << endl;
//	cout << "index: " << index[0] << ", " << index[1] << ", " << index[2] << ", " << index[3] << endl;

	cout << "******audio file read test**********" << endl;
	AudioFile<double> audioFile;
	audioFile.load ("test_audio/test_2_ch_1.wav");
	audioFile.printSummary();
	return 0;
}
