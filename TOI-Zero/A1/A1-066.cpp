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
    int x, y, tj = 0, count = 0;
    cin >> x >> y;

    while (true)
    {
        tj += x;
        count++;

        if (x <= 0)
        {
            cout << -1;
            break;
        }
        else if (tj >= y)
        {
            cout << count;
            break;
        }

        x -= 2;
    }
}