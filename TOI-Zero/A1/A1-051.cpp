#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
    string str;
    int n;
    char c;

    cin >> str >> n;

    for (int i = 0; i < str.length(); i++)
    {
        c = (char)(str[i] + n - 'a') % 26 + 'a';
        cout << c;
    }
}