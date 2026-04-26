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
    string a, b;
    int n, N;
    vector<string> av = {"BKK", "CNX", "UBP", "BKK", "PKT", "UBP"};
    vector<string> bv = {"CNX", "UBP", "BKK", "PKT", "CNX", "PKT"};
    vector<int> feev = {10, 15, 20, 25, 30, 40};
    vector<int> feeweightv = {30, 40, 40, 50, 60, 70};

    cin >> a >> b;
    cin >> n;

    for (int i = 0; i < 6; i++)
    {
        if (a == av[i])
        {
            if (b == bv[i])
            {
                N = feev[i] + (feeweightv[i] * n);
                cout << N;
                break;
            }
        }
        if (i == 5)
        {
            cout << "Error";
            break;
        }
    }
}