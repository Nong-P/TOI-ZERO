#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sid;

    cin >> sid;

    if (sid[2] == '1' && sid[3] == '6') {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}