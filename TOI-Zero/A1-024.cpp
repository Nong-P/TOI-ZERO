#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int year, engine;

    cin >> year >> engine;

    if (year <= 1990)
    {
        if (engine <= 1500)
        {
            cout << "1250";
        }
        else if (engine <= 2000)
        {
            cout << "1400";
        }
        else
        {
            cout << "2000";
        }
    }
    else if (year <= 1999)
    {
        if (engine <= 1500)
        {
            cout << "1100";
        }
        else if (engine <= 2000)
        {
            cout << "1300";
        }
        else
        {
            cout << "1700";
        }
    }
    else
    {
        if (engine <= 1500)
        {
            cout << "1000";
        }
        else if (engine <= 2000)
        {
            cout << "1200";
        }
        else
        {
            cout << "1500";
        }
    }

    return 0;
}