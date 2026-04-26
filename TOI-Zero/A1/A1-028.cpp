#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num4;

    cin >> num4;

    for (int i = num4.length() - 1; i >= 0; i--)
    {
        cout << num4[i];
    }
}