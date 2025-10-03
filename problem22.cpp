#include <iostream>
#include <cmath>
using namespace std;

double area(int n, double side) {
    const double PI = 3.14159265359;
    return (n * side * side) / (4 * tan(PI / n));
}

int main() {
    int n;
    double side;

    cout << "Enter the number of sides: ";
    cin >> n;

    cout << "Enter the side: ";
    cin >> side;

    double polygonArea = area(n, side);
    cout << "The area of the polygon is " << polygonArea << endl;

    return 0;
}