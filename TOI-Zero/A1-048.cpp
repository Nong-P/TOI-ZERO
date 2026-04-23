#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float nft, an = 0, percent;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        if (i > 200)
        {
            an = an + 15;
        }
        else if (i > 100)
        {
            an = an + 12;
        }
        else if (i > 50)
        {
            an = an + 10;
        }
        else if (i > 10)
        {
            an = an + 7;
        }
        else
        {
            an = an + 5;
        }
    }

    nft = an + (n * 0.50);
    percent = an * 7 / 100;

    cout << fixed << setprecision(2) << nft + percent;
}