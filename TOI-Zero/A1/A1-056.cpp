#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
    float x1, y1, z1, x2, y2, z2, d;

    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    cout << fixed << setprecision(2) << d;
}