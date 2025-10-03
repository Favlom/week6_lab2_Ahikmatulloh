#include <iostream>
using namespace std;

string convertMillis(long millis){
    int totalSeconds = millis / 1000;
    int seconds = totalSeconds % 60;
    int totalMinutes = totalSeconds / 60;
    int minutes = totalMinutes % 60;
    int hours = totalMinutes / 60;

    return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}

int main() {
    cout << convertMillis(555550000) << endl;
    return 0;
}
