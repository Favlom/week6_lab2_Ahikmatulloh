#include <iostream>
#include <cmath>
using namespace std;

// Identify if number is prime or not
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// Identify the reverse of the number
int reverseNumber(int number) {
    int reversed = 0;
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }
    return reversed;
}

// Identify if number is palindrome
bool isPalindrome(int number) {
    int reversedNumber = reverseNumber(number);
    if (reversedNumber == number) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int count = 0;
    int n = 10;
    int col = 0;

    while (count < 100) {
        if ((isPrime(n) && isPrime(reverseNumber(n)) && !isPalindrome(n))) {
            cout << n;
            col++;
            count++;
            if (count % 10 == 0) {
                cout << endl;
            } else {
                cout << "\t";
            }
        }
        n++;
    }
    return 0;
}

