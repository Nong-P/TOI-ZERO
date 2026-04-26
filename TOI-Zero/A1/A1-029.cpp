#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int num = 0;

    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            num++;
        }
    }

    cout << num;
}