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
    float n, product, total_product = 0;
    char member;

    cin >> member;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> product;
        total_product += product;
    }

    if (member == 'Y')
    {
        cout << fixed << setprecision(2) << total_product * 0.95;
    }
    else if (member == 'N' && total_product >= 500)
    {
        cout << fixed << setprecision(2) << total_product * 0.97;
    }
    else
    {
        cout << fixed << setprecision(2) << total_product;
    }
}