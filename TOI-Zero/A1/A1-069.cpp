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
    int n, m;
    cin >> n;
    cin >> m;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "A ";
            }
            cout << endl;
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "K ";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < (n / 2) + 1; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "A ";
            }
            cout << endl;
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "K ";
            }
            cout << endl;
        }
    }
}