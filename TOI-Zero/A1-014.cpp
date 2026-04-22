#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2, num3, lnum;

    cin >> num1 >> num2 >> num3;

    lnum = num1;

    if (lnum > num2) {
        lnum = num2;
    } 
    if(lnum > num3) {
        lnum = num3;
    }

    cout << lnum;

    return 0;
}