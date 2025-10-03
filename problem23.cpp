#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to roll a single die (1-6)
int rollDie() {
    return rand() % 6 + 1;
}

// Function to roll two dice and return their sum
int rollDice() {
    int die1 = rollDie();
    int die2 = rollDie();
    int sum = die1 + die2;

    cout << "You rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}

void playCraps() {
    srand(time(0));

    int sum = rollDice();

    if (sum == 7 || sum == 11) {
        cout << "You win" << endl;
        return;
    }
    else if (sum == 2 || sum == 3 || sum == 12) {
        cout << "You lose" << endl;
        return;
    }
    else {
        int point = sum;
        cout << "point is " << point << endl;

        while (true) {
            sum = rollDice();

            if (sum == point) {
                cout << "You win" << endl;
                return;
            }
            else if (sum == 7) {
                cout << "You lose" << endl;
                return;
            }
        }
    }
}

int main() {
    cout << "Let's play Craps!" << endl;
    playCraps();
    return 0;
}