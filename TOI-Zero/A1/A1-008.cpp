#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string numid;

    cin >> numid;

    if (numid.length() == 13) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
    }