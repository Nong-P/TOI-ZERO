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
    int n, pun, haroy, roy;
    cin >> n;

    if (n % 100 != 0 || n > 20000 || n < 100)
    {
        cout << "ERROR";
    }
    else
    {
        pun = n / 1000;
        haroy = (n % 1000) / 500;
        roy = ((n % 1000) % 500) / 100;
        if (pun != 0)
        {
            cout << "1000 = " << pun << endl;
        }
        if (haroy != 0)
        {
            cout << "500 = " << haroy << endl;
        }
        if (roy != 0)
        {
            cout << "100 = " << roy << endl;
        }
    }
}