#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



int f(int n, int l, int& d) {
	if (l >= d) {
		d = l;
	}
	if (n % 10 > 0) {
		return n % 10;
	}else
		if (n == 0) {
			return 0;
		}
		else
			return f(n / 10, l + 1, d);
}
int S(int n, int q, int& md) {
	int s = 0;
	for (; n <= q; n++) {
		s += f(n, 1, md);
	}
	return s;
}


int main() {
	int n,q;
	cout << "p="; cin >> n;
	cout << "q="; cin >> q;
	int d = 0;
	int s = S(n, q, d);
	cout << s << "\n";
	cout << d;

}