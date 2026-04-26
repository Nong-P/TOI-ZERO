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
    int a, b, c;

    cin >> a >> b >> c;

    double abc = (a * 25) + (b * 40) + (c * 55);

    if (a >= 0 && b >= 0 && c >= 0 && a <= 1000 && b <= 1000 && c <= 1000)
    {
        if (a + b + c >= 3)
        {
            abc = abc * 0.9;
            cout << int(abc);
        }
        else
        {
            cout << int(abc);
        }
    }
}