#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int nclass, nhours;
    cin >> nclass >> nhours;

    if (((nclass * nhours) / 60) != 0)
    {
        cout << ((nclass * nhours) / 60) << " hours ";
        if (((nclass * nhours) % 60) != 0)
        {
            cout << ((nclass * nhours) % 60) << " minutes";
        }
    }
    else if (((nclass * nhours) % 60) != 0)
    {
        cout << ((nclass * nhours) % 60) << " minutes";
    }
    else
    {
        cout << "No teaching";
    }
}