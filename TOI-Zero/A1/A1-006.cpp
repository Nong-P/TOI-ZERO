#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cin >> num1 >> num2;

    num3 = num1 % num2;

    if (num3 == 0) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}7