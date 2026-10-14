#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double S(const double x, const double eps, int& n);
double R(const double x, const double n, double a);
int main() {
	double x,xk,xp,dx,eps,a,R,s=0;
	int n;



	cout << "xp=";  cin >> xp;
	cout << "xk=";  cin >> xk;
	cout << "dx=";  cin >> dx;
	cout << "eps="; cin >> eps;

	cout << "\n-------------------------\n"
        << "|" << "x"      << "    |"
		       << "atan(x)" << "|"
		       << "S"      << "    |" 
		       << "n"      << "    |"
		<< "\n-------------------------\n";

	x = xp;
	while (x <= xk) {
		s = S(x, eps, n);
		cout << "|"
			<< setw(5) << setprecision(2) << x << "|"
			<< setw(5) << setprecision(2) << atan(x) << "  |"
			<< setw(5) << setprecision(2) << s << "|"
			<< setw(5) << setprecision(2) << n
			<< "|\n";
		cout << fixed;
		x += dx;
	}
	cout << "\n-------------------------\n";

}
double S(const double x, const double eps, int& n)
{
	n = 0;
	double a = x;
	double s = a;
	do {
		n++;
		a = R(x, n, a);
		s += a;
	} while (abs(a) >= eps);
	return s;
}
double R(const double x, const double n, double a) {
	double R_2= -x * x * (2.0 * n - 1.0) / (2.0 * n + 1.0);
	a = a * R_2;
	return a;
}