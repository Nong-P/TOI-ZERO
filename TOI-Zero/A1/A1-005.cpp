#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int day, month;

    cin >> month >> day;

    if (month == 1 || month == 2 || ( month == 3 && day < 21)) {
        cout << "winter";
    } else if (month == 3 || month == 4 || month == 5 || ( month == 6 && day < 21)) {
        cout << "spring";
    } else if (month == 6 || month == 7 || month == 8 || ( month == 9 && day < 21)) {
        cout << "summer";
    } else if (month == 9 || month == 10 || month == 11 || ( month == 12 && day < 21)) {
        cout << "fall";
    } else {
        cout << "winter";
    }

    return 0;
}