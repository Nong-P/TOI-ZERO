#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, num1, num2, anum = 0;
    vector<int> sum;

    cin >> n;
    for (int i = 0; i < n; i++)                     
    {
        cin >> num1 >> num2;
        if (num1 > num2)
        {
            anum += num1;
            sum.push_back(num1);
        }
        else
        {
            anum += num2;
            sum.push_back(num2);
        }
    }

    if (sum.size() == 1)
    {
    }
    else
    {
        cout << sum[0];
    }

    for (int i = 1; i < sum.size(); i++)
    {
        cout << " + " << sum[i];
    }

    if (sum.size() == 1)
    {
        cout << anum;
    }
    else
    {
        cout << " = " << anum;
    }
}