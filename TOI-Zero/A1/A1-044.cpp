#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    string day;
    int age, i = 0;
    vector<int> pricevec = {150, 100, 0};
    vector<int> agevec = {19, 5, 0};
    cin >> age >> day;

    for (int x : pricevec)
    {
        if (age >= agevec[i])
        {
            if (day == "Wed")
            {
                x = x / 2;
                cout << x;
                break;
            }
            else
            {
                cout << x;
                break;
            }
        }
        i++;
    }
}