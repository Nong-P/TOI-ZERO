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
    int r, x, y;
    cin >> r >> x >> y;

    if ((x * x) + (y * y) < (r * r))
    {
        cout << "IN";
    }
    else if ((x * x) + (y * y) == (r * r))
    {
        cout << "ON";
    }
    else
    {
        cout << "OUT";
    }
}