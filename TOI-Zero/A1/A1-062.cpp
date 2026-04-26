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
    int s, e;
    vector<int> p;
    bool isPrime = true;
    cin >> s >> e;

    for (int i = s; i <= e; i++)
    {
        isPrime = true;
        if (i != 1 || i > 1)
        {
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime == true)
            {
                p.push_back(i);
                cout << i << " ";
            }
        }
    }

    cout << endl;
    cout << "Total primes: " << p.size();
}