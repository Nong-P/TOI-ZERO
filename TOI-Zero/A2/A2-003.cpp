#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <numeric>
#include <map>

using namespace std;

int main()
{
    int n, nest = 0;

    cin >> n;
    vector<int> h(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (h[0] > h[1])
            {
                nest++;
            }
        }
        else if (i == n - 1)
        {
            if (h[i] > h[i - 1])
            {
                nest++;
            }
        }
        else
        {
            if (h[i] > h[i - 1] && h[i] > h[i + 1])
            {
                nest++;
            }
        }
    }

    cout << nest;
}