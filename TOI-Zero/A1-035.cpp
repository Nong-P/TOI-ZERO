#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int N, powN = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        powN = powN + i * i;
    }

    cout << powN;
}