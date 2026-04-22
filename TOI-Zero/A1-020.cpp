#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    if (num1 < num2 && num2 < num3) {
        cout << "increasing";
    } else if (num1 > num2 && num2 > num3) {
        cout << "decreasing";
    } else {
        cout << "neither";
    }

    return 0;
}