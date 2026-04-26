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
    double r, h, g, wpaper, longpaper;
    cin >> r >> h >> g;

    wpaper = h + (r * 2);
    longpaper = (2 * 3.14 * r) + g;

    cout << fixed << setprecision(2) << wpaper << " ";
    cout << fixed << setprecision(2) << longpaper;
}