#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n, fac = 1;

    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        fac = fac * i;
    }

    cout << fac;
}