#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    char status;
    int age;

    cin >> age >> status;

    if (age < 18 || status == 's' || status == 'S') {
        cout << "20";
    } else {
        cout << "50";
    }

    return 0;
}