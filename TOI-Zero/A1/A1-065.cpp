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
    string n;
    vector<char> op = {'*', '+', '/', '#'};

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        if (stoi(n) == 0)
        {
            cout << '-';
        }
        else
        {
            for (int j = 0; j < n.length(); j++)
            {
                int chint = n[j] - '0';
                if (chint > 0)
                {
                    cout << op[n.length() - 1 - j];
                }
                else
                {
                    continue;
                }
            }
        }
    }
}