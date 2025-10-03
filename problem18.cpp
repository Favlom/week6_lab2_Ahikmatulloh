#include <iostream>
#include <cmath>

using namespace std;

double seriesA(int n);
double seriesB(int n);
double seriesC(int n);
double seriesD(int n);

double pi=3.1415;
double e=2.7182;

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Series A(" << n << ") = " << seriesA(n) << endl;
    cout << "Series B(" << n << ") = " << seriesB(n) << endl;
    cout << "Series C(" << n << ") = " << seriesC(n) << endl;
    cout << "Series D(" << n << ") = " << seriesD(n) << endl;

    return 0;
}

double seriesA(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += pi * pow(2, -i);
    }
    return sum;
}

double seriesB(int n) {
    double product = 1;
    for (int i = 1; i <= n; i++) {
        product *= (pi / 2) * pow(i, e);
    }
    return product;
}

double seriesC(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = pow(2, i) / (2 * pi + i);
        if (i % 2 == 1) {
            sum -= term;
        } else {
            sum += term;
        }
    }
    return sum;
}

double seriesD(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i * pi) / pow(e, i);
    }
    return sqrt(sum);
}