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
    int n, point = 0;
    char op;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == '+')
        {
            point += 10;
        }
        else if (op == '-')
        {
            point -= 5;
        }
    }

    cout << point;
}