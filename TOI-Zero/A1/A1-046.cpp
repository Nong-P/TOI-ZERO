#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n, nstock, even = 0, odd = 0, sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nstock;
        if (nstock % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        sum = sum + nstock;
    }
    
    cout << "SUM " << sum << endl;
    cout << "EVEN " << even << endl;
    cout << "ODD " << odd << endl;
}