#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 3; i++)
    {
        if (n > 0)
        {
            cout << string(n, '*') << endl;
            n = n - 2;
        }
        else
        {
            return 0;
        }
    }
}