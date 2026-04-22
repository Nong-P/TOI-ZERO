#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2, num3;
    
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num1 == num3) {
        cout << "all the same";
    } else if (num1 != num2 && num1 != num3 && num2 != num3) {
        cout << "all different";
    } else if (num1 == num2 || num1 == num3 || num2 == num3) {
        cout << "neither";
    }

    return 0;
}