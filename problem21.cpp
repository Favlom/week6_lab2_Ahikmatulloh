#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t currentTime = time(0);

    tm* localTime = localtime(&currentTime);

    cout << "Current date and time is ";

    switch(localTime->tm_mon) {
        case 0: cout << "January "; break;
        case 1: cout << "February "; break;
        case 2: cout << "March "; break;
        case 3: cout << "April "; break;
        case 4: cout << "May "; break;
        case 5: cout << "June "; break;
        case 6: cout << "July "; break;
        case 7: cout << "August "; break;
        case 8: cout << "September "; break;
        case 9: cout << "October "; break;
        case 10: cout << "November "; break;
        case 11: cout << "December "; break;
    }

    cout << localTime->tm_mday << ", "
         << (localTime->tm_year + 1900) << " "
         << localTime->tm_hour << ":"
         << localTime->tm_min << ":"
         << localTime->tm_sec << endl;

    return 0;
}