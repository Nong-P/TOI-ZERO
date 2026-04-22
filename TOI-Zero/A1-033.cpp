#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N, aN = 0;
    char C;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> C;
        if (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U')
        {
            aN++;
        }
    }

    cout << aN;
}