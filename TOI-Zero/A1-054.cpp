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
    char c;
    int a, n, bonus;

    cin >> c >> a >> n;

    if (c == 'M')
    {
        if (a < 5)
        {
            bonus = (n * 6 / 100) + 1500;
        }
        else if (a < 10)
        {
            bonus = (n * 8 / 100) + 1500;
        }
        else
        {
            bonus = (n * 10 / 100) + 1500;
        }
    }
    else if (c == 'B')
    {
        if (a < 5)
        {
            bonus = (n * 5 / 100) + 1000;
        }
        else if (a < 10)
        {
            bonus = (n * 6 / 100) + 1000;
        }
        else
        {
            bonus = (n * 7 / 100) + 1000;
        }
    }
    else if (c == 'G')
    {
        if (a < 5)
        {
            bonus = (n * 4 / 100) + 500;
        }
        else if (a < 10)
        {
            bonus = (n * 5 / 100) + 500;
        }
        else
        {
            bonus = (n * 6 / 100) + 500;
        }
    }
    else
    {
        bonus = 0;
    }

    cout << bonus;
}