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
    int n, minsell, maxsell;
    double avesell, asell;
    cin >> n;
    vector<double> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    asell = accumulate(v.begin(), v.end(), 0.0);
    maxsell = *max_element(v.begin(), v.end());
    minsell = *min_element(v.begin(), v.end());
    avesell = asell / n;

    cout << int(asell) << endl;
    cout << maxsell << endl;
    cout << minsell << endl;
    cout << fixed << setprecision(1) << avesell << endl;
}