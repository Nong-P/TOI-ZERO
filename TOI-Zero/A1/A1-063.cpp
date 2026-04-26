#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <numeric>

using namespace std;

int main()
{
    int n, age, ticket, c;
    cin >> n;
    c = n;

    while (cin >> age >> ticket)
    {
        if (age < 15)
        {
            cout << -1 << endl;
            continue;
        }

        c = c - ticket;

        if (c < 0)
        {
            cout << -2;
            break;
        }

        if (age >= 60)
        {
            cout << (ticket * 150) * 0.5 << " " << c << endl;
        }
        else if (age >= 23)
        {
            cout << (ticket * 150) << " " << c << endl;
        }
        else
        {
            cout << (ticket * 150) * 0.8 << " " << c << endl;
        }
    }
}