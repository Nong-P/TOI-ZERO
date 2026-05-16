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
#include <functional>
#include <utility>

using namespace std;

int w, l, h, price;

void input()
{
    cin >> w >> l >> h;
    cin >> price;
}

int main()
{
    input();
    cout << (w + w + l + l) * h << endl
         << ((w + w + l + l) * h) * price;
}