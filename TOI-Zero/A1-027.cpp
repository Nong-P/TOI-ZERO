#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cin >> str;

    // cout << (char)tolower(str[4]) << (char)tolower(str[3]) << (char)tolower(str[2]) << (char)tolower(str[1]) << (char)tolower(str[0]);
    reverse(str.begin(), str.end());
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str;
}