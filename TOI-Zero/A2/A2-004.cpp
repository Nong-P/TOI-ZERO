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
    int n, maxgroup = 0;
    cin >> n;
    vector<int> vbowl(n);
    map<int, int> mbowl;

    for (int i = 0; i < n; i++)
    {
        cin >> vbowl[i];
    }

    for (int x : vbowl)
    {
        mbowl[x]++;
    }

    for (auto [key, val] : mbowl)
    {
        maxgroup = max(maxgroup, val);
    }

    cout << maxgroup;
}