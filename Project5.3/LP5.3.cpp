#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S(double x);
double t(double x);

int main() {
    double qp, qk, n, q, s, dq;

    cout << "qp="; cin >> qp;
    cout << "qk="; cin >> qk;
    cout << "n=";  cin >> n;

    cout << "\n-----------------------\n";
    cout << "|" << setw(10) << "q" << "|" << setw(10) << "s" << "|\n";
    cout << "-----------------------\n";

    q = qp;
    dq = (qk - qp) / n;

    while (q <= qk) {

        s = S(2 * q + 1) + pow(S(q * q - 1), 2) + sqrt(S(1));
        cout << "|" << setw(10) << q << "|" << setw(10) << s << "|\n";

        q += dq;
    }

    cout << "-----------------------\n";
    return 0;
}

double S(double x) {
    if (abs(x) >= 1) {
        return (sin(x) + cos(x)) / (pow(sin(x), 2) + exp(x));
    }
    if (abs(x) < 1) {
        return (1.0 / cos(x)) * t(x);
    }
    return 0;
}

double t(double x) {
    int j = 1;
    double a = 1.0;
    double sum = a;

    while (j <= 4) {
        a = a * (-x * x) / ((2 * j - 1) * 2 * j);
        sum += a;
        j++;
    }

    return sum;
}