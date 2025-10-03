#include <iostream>
using namespace std;

int reverseNumber(int number) {
    int reversed = 0;
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }
    return reversed;
}

bool isPalindrome(int number) {
    return number == reverseNumber(number);
}

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int count = 0;
    int number = 2;

    while (count < 50) {
        if (isEven(number) && isPalindrome(number)) {
            if (number < 10) {
                cout << number << "    ";
            } else if (number < 100) {
                cout << number << "   ";
            } else if (number < 1000) {
                cout << number << "  ";
            } else {
                cout << number << " ";
            }

            count++;

            if (count % 5 == 0) {
                cout << endl;
            }
        }
        number += 2;
    }

    return 0;
}