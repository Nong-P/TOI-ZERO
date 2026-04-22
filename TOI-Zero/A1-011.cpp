#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 1;
    string str;

    cin >> str;
    str += '#';

    for (int i = 0 ; i < 5 ; i++) {
        if (str[i] == str[i+1]) {
            count++;
        } else {
            cout << count << str[i];
            count = 1;
        }
    }

    return 0;
}