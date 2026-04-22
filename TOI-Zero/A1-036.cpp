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
    vector<int> vec;

    cin >> n;

    for (int i = n; i >= 0; i--)
    {
        if (i % 10 == 0)
        {
            vec.push_back(i);
            cout << i << " ";
        }
    }
}