// Лабораторна робота № 5.4
// Варіант № 9
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double S0(int N, int i) {
	double s = 0;
	for (; i <= N; i++) {
		
		s += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
	}
	return s;
}
double S1(int N, int i) {
	if (i > N)
		return 0;
	else {
		return S1(N, i+1) + ((sin(10.0 * i) + cos(10.0 / i)) / sqrt(i));
	}
}
double S2(int N, int K, int i) {
	if (i < K)
		return 0;
	else {
		return S2(N,K, i-1) + ((sin(10.0 * i) + cos(10.0 / i)) / sqrt(i));
	}
}
double S3(int N, int K, int i, double t) {
	t += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
	if (i >= N) {
		return t;
	}
	else {
		return S3(N, K, i + 1, t);
	}
}
double S4(int N, int K, int i, double t) {
	t += ((sin(10.0 * i) + cos(10.0 / i)) / sqrt(i));
	if (i <= K) {
		return t;
	}
	else {
		return S4(N, K, i - 1, t);
	}
}



	
	int main() {

	    int N = 15;
		int K =  1;
		int i;
		double t;

		cout << "1) S0= " << S0(N, K) << "\n";
		cout << "2) S1= " << S1(N, K) << "\n";
		cout << "3) S2= " << S2(N, K, N) << "\n";
		cout << "4) S3= " << S3(N, K, K, 0) << "\n";
		cout << "5) S4= " << S4(N, K, N, 0) << "\n";
		}