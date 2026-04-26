#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, surname, age;

    cin >> name >> surname >> age;

    if (name.length() > 5 && surname.length() > 5) {
        cout << name[0] << name[1] << surname[surname.length() - 1] << age[age.length() - 1];
    } else {
        cout << name[0] << age << surname[surname.length() - 1];
    }

    return 0;
}