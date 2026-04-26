#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string num1, num2;
    char op;

    cin >> num1 >> op;
    num2 = string(1, num1[1]) + string(1, num1[0]);
    int numint1 = stoi(num1);
    int numint2 = stoi(num2);

    if (op == '+') {
        cout << numint1 << " + " << numint2 << " = " << numint1 + numint2;
    } else {
        cout << numint1 << " * " << numint2 << " = " << numint1 * numint2;
    }

    return 0;
}