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
    int N;
    long long ans = 0, x, y, resultsum = 0, resultdiff = 0;
    map<long long, vector<long long>> sum, diff;
    cin >> N;

    // เก็บเส้นแทยงเดียวกัน หาค่ามากสุดน้อยสุด

    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        sum[x + y].push_back(x);
        diff[y - x].push_back(x);
    }

    for (auto const &[name, v] : sum)
    {
        resultsum = max(resultsum, *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()));
    }

    for (auto const &[name, v] : diff)
    {
        resultdiff = max(resultdiff, *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()));
    }

    ans = max(resultsum, resultdiff);

    cout << ans;
}