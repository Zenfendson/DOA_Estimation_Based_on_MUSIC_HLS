#include "music.h"

using namespace std;
int main() {
	cout << "************MUSIC test**************" << endl;
	cout << "************sort test***************" << endl;
	float eigval[4] = {1.2, 3.2, 0.5, -0.7};
	int index[4];
	sort_eigval(eigval, index);
	cout << "eigval: " << eigval[0] << ", " << eigval[1] << ", " << eigval[2] << ", " << eigval[3] << endl;
	cout << "index: " << index[0] << ", " << index[1] << ", " << index[2] << ", " << index[3] << endl;
	cout << ""
}
