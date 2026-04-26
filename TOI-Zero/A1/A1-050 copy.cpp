#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

// เขียนใหม่ไอสัส

int main()
{
    int nboy = 0, ngirl = 0, n;
    cin >> n;

    while (n >= 0)
    {
        if (n < 0)
        {
            break;
        }
        if (n % 2 != 0)
        {
            nboy++;
        }
        else if (n % 2 == 0)
        {
            ngirl++;
        }
        cin >> n;
    }

    cout << nboy << " " << ngirl << " " << nboy + ngirl;
}