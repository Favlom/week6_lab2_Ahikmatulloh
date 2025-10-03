#include <iostream>
using namespace std;

void displaySortedNumbers(double a, double b, double c) {
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        double temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        double temp = b;
        b = c;
        c = temp;
    }

    cout << a << " " << b << " " << c << endl;
}

int main() {
    displaySortedNumbers(10.0, 20.1, 40.2);

    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Numbers in increasing order: ";
    displaySortedNumbers(num1, num2, num3);

    return 0;
}
