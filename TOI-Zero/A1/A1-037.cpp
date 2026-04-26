#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    vector<int> vnum = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> vroman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    cin >> n;

    for (int i = 0; i < vnum.size(); i++)
    {
        while (n >= vnum[i])
        {
            n = n - vnum[i];
            cout << vroman[i];
        }
    }
}