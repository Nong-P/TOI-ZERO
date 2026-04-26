#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int Km;
    cin >> Km;

    if (Km > 10)
    {
        cout << ((Km - 10) * 8) + 80;
    }
    else if (Km > 1)
    {
        cout << ((Km - 1) * 5) + 35;
    }
    else
    {
        cout << 35;
    }
}