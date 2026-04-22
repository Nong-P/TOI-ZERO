#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    string roman[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    cin >> num;

    if (num >= 1 && num <= 9) {
        // if (num == 1) {
        //     cout << "I";
        // } else if (num == 2) {
        //     cout << "II";
        // } else if (num == 3) {
        //     cout << "III";
        // } else if (num == 4) {
        //     cout << "IV";
        // } else if (num == 5) {
        //     cout << "V";
        // } else if (num == 6) {
        //     cout << "VI";
        // } else if (num == 7) {
        //     cout << "VII";
        // } else if (num == 8) {
        //     cout << "VIII";
        // } else if (num == 9) {
        //     cout << "IX";
        // }
        cout << roman[num];
    } else if (num < 0) {
        cout << "Error : Please input positive number";
    } else {
        cout << "Error : Out of range";
    }

    return 0;
}