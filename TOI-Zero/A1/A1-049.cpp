#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string n, revn;
    vector<int> floor = {9, 10, 11, 12, 14};
    cin >> n;
    int Else = 0, d1 = n[0] - '0', d2 = n[1] - '0', d3 = n[2] - '0', d4 = n[3] - '0', d5 = n[4] - '0';
    revn = n;

    // หาชั้นห้อง
    for (int i = 0; i < 5; i++)
    {
        if (int x = n[i] - '0' > 5)
        {
            cout << floor[i];
            break;
        }
        Else++;
    }

    if (Else == 5)
    {
        cout << 13;
    }
    // หาชั้นห้อง
    reverse(revn.begin(), revn.end());

    // หาเลขห้องหลัก1
    if (n == revn)
    {
        if (d1 + d5 > 5)
        {
            cout << 1;
        }
        else if (d2 * d4 > 5)
        {
            cout << 2;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        if (d5 != 0 && round(d1 / d5) > 5) // พ่อมึงตายหารปัดเศษ
        {
            cout << 1;
        }
        else if (d2 - d5 > 5)
        {
            cout << 2;
        }
        else
        {
            cout << 0;
        }
    }
    // หาเลขห้องหลัก1

    // หาเลขห้องหลัก2
    if (d1 + d2 + d3 + d4 + d5 > 25)
    {
        cout << 1;
    }
    else if (d1 * d2 * d3 * d4 * d5 > 55)
    {
        cout << 2;
    }
    else
    {
        cout << 0;
    }
    // หาเลขห้องหลัก2
}