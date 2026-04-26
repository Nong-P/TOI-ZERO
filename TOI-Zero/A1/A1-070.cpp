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
    int n;
    float plastic, can, glass;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> plastic >> can >> glass;

        cout << fixed << setprecision(1) << plastic + can + glass;
        if (plastic + can + glass > 50)
        {
            cout << ",Overloaded";
        }
        if (plastic > 20)
        {
            cout << ",Check Type Plastic";
        }
        if (can > 20)
        {
            cout << ",Check Type Can";
        }
        if (glass > 20)
        {
            cout << ",Check Type Glass";
        }
        cout << endl;
    }
}