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
    long long N, ans = 0, x, y;
    vector<pair<long long, long long>> xy;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        xy.push_back({x, y}); // จุด A i,C j แทยง
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j != i)
            {
                long long dx = abs(xy[j].first - xy[i].first);
                long long dy = abs(xy[j].second - xy[i].second);
                if (dx == dy)
                {
                    ans = max(ans, dx);
                }
            };
        }
    }

    cout << ans;
}