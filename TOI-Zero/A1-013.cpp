#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    char charpass;
    int numpass;

    cin >> charpass >> numpass;

    if (charpass == 'H') {
        if (numpass == 4567) {
            cout << "safe unlocked";
        } else {
            cout << "safe locked - change digit";
        }
    } else {
        if (numpass == 4567) {
            cout << "safe locked - change char";
        } else {
            cout << "safe locked";
        }
    }

    return 0;
}