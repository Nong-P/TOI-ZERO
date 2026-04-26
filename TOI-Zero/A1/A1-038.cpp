#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            cout << "X";
        }
        else
        {
            cout << "*";
        }
    }
}