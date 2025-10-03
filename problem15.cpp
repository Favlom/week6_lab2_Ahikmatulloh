#include <iostream>
using namespace std;



void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;


    for (char ch = ch1; ch <= ch2; ch++) {

        cout << ch << " = " << (int)ch;

        count++;


        if (count % numberPerLine == 0) {
            cout << endl;
        } else {
            cout << "\t";
        }
    }

    if (count % numberPerLine != 0) {
        cout << endl;
    }
}

int main() {
    cout << "ASCII values from 'a' to 'm' (6 per line):" << endl;
    printASCII('a', 'm', 6);

    return 0;
}