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
    cin >> n;

    for (int i = 1; i <= 12; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}