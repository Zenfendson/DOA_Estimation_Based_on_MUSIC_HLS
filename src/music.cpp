#include "music.h"

void qr_decompose(
		complex_float A[N_SENSOR][N_SENSOR],
		complex_float Q[N_SENSOR][N_SENSOR],
		complex_float R[N_SENSOR][N_SENSOR])
{
	hls::qrf<false, N_SENSOR, N_SENSOR, complex_float, complex_float> (A, Q, R);
}
void eig_decompose(complex_float Rx[N_SENSOR][N_SENSOR], complex_float U[N_SENSOR][N_SENSOR], float eigval[N_SENSOR]) {
	complex_float Q_temp[N_SENSOR][N_SENSOR];
	complex_float R_temp[N_SENSOR][N_SENSOR];
	complex_float Rx_temp[N_SENSOR][N_SENSOR];
	complex_float eig_mat[N_SENSOR][N_SENSOR];
	complex_float temp;
	complex_float mid, sum;
	float midsum;

	for(int i = 0; i < N_SENSOR; i++) {
		for(int j = 0; j < N_SENSOR; j++) {
			eig_mat[i][j] = Rx[i][j];
			Rx_temp[i][j] = Rx[i][j];
		}
	}
	for(int i = 0; i < 30; i++) {
		qr_decompose(eig_mat, Q_temp, R_temp);
		for(int i = 0; i < N_SENSOR; i++) {
			for(int j = 0; j < N_SENSOR; j++) {
				temp.real(0);
				temp.imag(0);
				for (int k = 0; k < N_SENSOR; k++) {
					temp += R_temp[i][k] * Q_temp[k][j];
				}
				eig_mat[i][j] = temp;
			}
		}
	}
	for(int count = 0; count < N_SENSOR; count++) {
		eigval[count] = eig_mat[count][count].real();
		for(int i = 0; i < N_SENSOR; i++) {
			Rx_temp[i][i] = Rx[i][i] - eigval[count];
		}
		for(int i = 0; i < N_SENSOR - 1; i++) {
			mid = Rx_temp[i][i];
			for(int j = i; j < N_SENSOR; j++) {
				Rx_temp[i][j] /= mid;
			}
			for(int j = i + 1; j < N_SENSOR; j++) {
				mid = Rx_temp[j][i];
				for(int q = i; q < N_SENSOR; q++) {
					Rx_temp[j][q] -= mid * Rx_temp[i][q];
				}
			}
		}
		midsum = 1;
		U[N_SENSOR - 1][count] = 1;
		for(int m = N_SENSOR - 2; m >=0; --m) {
			sum = 0;
			for(int j = m + 1; j < N_SENSOR; j++) {
				sum += Rx_temp[m][j] * U[j][count];
			}
			sum = -sum / Rx_temp[m][m];
			midsum += sum.real() * sum.real() + sum.imag() * sum.imag();
			U[m][count] = sum;
		}
		midsum = sqrt(midsum);
		for(int i = 0; i < N_SENSOR; i++) {
			U[i][count] /= midsum;
		}
	}
}
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
void Autocorrelation(complex_float X[N_STFT][N_SENSOR], complex_float Rx[N_SENSOR][N_SENSOR]) {
	for (int x = 0; x < N_SENSOR; x++) {
		for (int y = 0; y < N_SENSOR; y++) {
			complex_float temp(0.0, 0.0);
			for(int l = 0; l < N_STFT; l++) {
				temp += X[l][x] * conj(X[l][y]);
			}
			Rx[x][y] = temp / (float)N_STFT;
		}
	}
}
unsigned int reverse_bits(unsigned int input) {
	int i, rev = 0;
	for (i = 0; i < M; i++) {
		rev = (rev << 1) | (input & 1);
		input = input >> 1;
	}
	return rev;
}

void bit_reverse(float X_R[N_FREQ], float X_I[N_FREQ]) {
	unsigned int reversed;
	unsigned int i;
	float temp;

	for (i = 0; i < N_FREQ; i++) {
		reversed = reverse_bits(i); // Find the bit reversed index
		if (i <= reversed) {
			// Swap the real values
			temp = X_R[i];
			X_R[i] = X_R[reversed];
			X_R[reversed] = temp;

			// Swap the imaginary values
			temp = X_I[i];
			X_I[i] = X_I[reversed];
			X_I[reversed] = temp;
		}
	}
}
void fft(float X_R[N_FREQ], float X_I[N_FREQ])
{
	cout << "fft input real: " << endl;
	for(int i = 0; i < N_FREQ; i++) {
		cout << X_R[i] << ",";
	}
	cout << endl;
	float temp_R;		/*temporary storage complex variable*/
	float temp_I;		/*temporary storage complex variable*/


	int i,j,k;			/* loop indexes */
	int i_lower;		/* Index of lower point in butterfly */
	int step;

	int stage;
	int DFTpts;
	int numBF;			/*Butterfly Width*/

	int N2 = SIZE2;	/* N2=N>>1 */

	bit_reverse(X_R, X_I);

	step=N2;

	float a, e, c, s;

	stages:for(stage=1; stage<= M; stage++)
	{
		DFTpts = 1 << stage;		// DFT = 2^stage = points in sub DFT
		numBF = DFTpts/2; 			// Butterfly WIDTHS in sub-DFT
		k=0;

		e = -6.283185307178/DFTpts;

		a = 0.0;
		// Perform butterflies for j-th stage
		butterfly:for(j=0; j<numBF; j++)
		{

			c = cos(a);
			s = sin(a);
			a = a + e;

			// Compute butterflies that use same W**k
			DFTpts:for(i=j; i<SIZE; i += DFTpts)
			{

				i_lower = i + numBF;			//index of lower point in butterfly
				temp_R = X_R[i_lower]*c- X_I[i_lower]*s;
				temp_I = X_I[i_lower]*c+ X_R[i_lower]*s;

				X_R[i_lower] = X_R[i] - temp_R;
				X_I[i_lower] = X_I[i] - temp_I;
				X_R[i] = X_R[i] + temp_R;
				X_I[i] = X_I[i] + temp_I;
			}
			k+=step;
		}
		step=step/2;
	}
	cout << "fft output real: " << endl;
	for(int i = 0; i < N_FREQ; i++) {
		cout << X_R[i] << ",";
	}
	cout << endl;
}

void ifft(float X_R[SIZE], float X_I[SIZE]){
	Conjugate(X_R,X_I);
	fft(X_R,X_I);
	Conjugate(X_R,X_I);
	unsigned int i;
	for(i=0; i < SIZE; i++){
		X_R[i]=X_R[i]/SIZE;
		X_I[i]=X_I[i]/SIZE;
	}
}

void Conjugate(float X_R[SIZE], float X_I[SIZE]){
	unsigned int i;
	for(i=0; i < SIZE; i++){
		X_I[i]=-X_I[i];
	}
}

void music(float X[N_SAMPLE][N_SENSOR], int DOA_src, int DOA_interfer) {
	
	float FFT_Buffer_re[N_FREQ];
	float FFT_Buffer_im[N_FREQ];
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
	DOA_src = 0;
	DOA_interfer = 0;

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
				FFT_Buffer_re[j] = X[l*N_FREQ+j][n];
				FFT_Buffer_im[j] = 0;
			}
//			cout << "fft input: " << endl;
//			for(int i = 0; i < N_FREQ; i++) {
//				cout << FFT_Buffer[i] << ",";
//			}
//			cout << endl;
			fft(FFT_Buffer_re, FFT_Buffer_im);
//			cout << "fft output: " << endl;
//			for(int i = 0; i < N_FREQ; i++) {
//				cout << FFT_Buffer[i] << ",";
//			}
//			cout << endl;
			for(int j = 0; j< N_FREQ; j++) {
				Xj_f[j][l][n] = {FFT_Buffer_re[j], FFT_Buffer_im[j]};
			}
		}
	}

	for(int jj = 0; jj < N_FREQ; jj++) {
		for (int l = 0; l < N_STFT; l++) {
			for (int n = 0; n < N_SENSOR; n++) {
				Autocorr_Buffer[l][n] = Xj_f[jj][l][n];
			}
		}
		Autocorrelation(Autocorr_Buffer, Rx);
		cout << "Autocorr_Buffer: " << endl;
		for(int i = 0; i < N_STFT; i++) {
			for(int j = 0; j < N_SENSOR; j++) {
				cout << Autocorr_Buffer[i][j].real() << "+" << Autocorr_Buffer[i][j].imag() << "i  ";
			}
			cout << endl;
		}
		cout << "Rx: " << endl;
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 4; j++) {
				cout << Rx[i][j].real() << "+" << Rx[i][j].imag() << "i  ";
			}
			cout << endl;
		}
	}
//		eig_decompose(Rx, U, eigval);
//		sort_eigval(eigval, sort_index);
//		for(int x = 0; x < N_SENSOR; x++) {
//			for(int y = 0; y < N_SENSOR; y++) {
//				if (sort_index[y] == 2) {
//					Un[x][0] = U[x][y];
//				} else if (sort_index[y] == 3) {
//					Un[x][1] = U[x][y];
//				}
//			}
//		}
//		for (int x = 0; x < N_SENSOR; x++) {
//			for (int y = 0; y < 361; y++) {
//				a_theta[x][y].real(cos(2*PIE*fc[jj]*p[x]*sin(theta[y]*PIE/180)/VELOCITY));
//				a_theta[x][y].imag(sin(2*PIE*fc[jj]*p[x]*sin(theta[y]*PIE/180)/VELOCITY));
//			}
//		}
//
//		for(int i = 0; i < N_SENSOR; i++) {
//			for(int j = 0; j < N_SENSOR; j++) {
//				UU[i][j] = Un[i][0] * conj(Un[j][0]) + Un[i][1] * conj(Un[j][1]);
//			}
//		}
//		for(int i = 0; i < 361; i++) {
//			for(int j = 0; j < N_SENSOR; j++) {
//				temp.real(0.0);
//				temp.imag(0.0);
//				for (int k = 0; k < N_SENSOR; k++) {
//					temp += conj(a_theta[i][k]) * UU[k][j];
//				}
//				AUU[i][j] = temp;
//			}
//		}
//		for(int i = 0; i < 361; i++) {
//			temp.real(0.0);
//			temp.imag(0.0);
//			for (int k = 0; k < N_SENSOR; k++) {
//				temp += AUU[i][k] * conj(a_theta[i][k]);
//			}
//			w[i] += temp;
//		}
//	}
//	for (int i = 0; i < 361; i++) {
//		P_sm[i] = 1/w[i].real();
//	}
//	cout << "Psm: " << endl;
//	for(int i = 0; i < 361; i++) {
//		cout << P_sm[i] << "  ";
//	}
//	cout << endl;
}
