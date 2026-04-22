#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    string str;
    int x = 0, y = 0, mht = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'N')
        {
            y++;
        }
        else if (str[i] == 'S')
        {
            y--;
        }
        else if (str[i] == 'E')
        {
            x++;
        }
        else if (str[i] == 'W')
        {
            x--;
        }
    }

    mht = abs(0 - x) + abs(0 - y);

    cout << x << " " << y << " " << mht;
}