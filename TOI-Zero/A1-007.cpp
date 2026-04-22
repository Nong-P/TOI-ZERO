#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string charl;

    cin >> charl;

    if (charl == "a" || charl == "e" || charl == "i" || charl == "o" || charl == "u") {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}