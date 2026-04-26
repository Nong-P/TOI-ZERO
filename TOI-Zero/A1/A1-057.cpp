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
    int diceg, dice;

    cin >> diceg >> dice;

    if (diceg >= 1 && diceg <= 6 && dice >= 1 && dice <= 6)
    {
        if (diceg == dice)
        {
            cout << "Correct!";
        }
        else
        {
            cout << "Wrong!";
        }
    }
    else
    {
        cout << "Invalid";
    }
}