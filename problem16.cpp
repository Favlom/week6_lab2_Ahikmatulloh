#include <iostream>
using namespace std;

void printMatrix(int n) {
    static int seed = 0;
    seed++;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int randomValue = (i * 17 + j * 23 + seed) % 1001;
            cout << randomValue << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 0;
    cout << "Enter the n for nxn matrix: ";
    cin >> n;
    printMatrix(n);
    return 0;
}