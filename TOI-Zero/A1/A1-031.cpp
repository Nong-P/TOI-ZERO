#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string num;

    cin >> num;

    // if (num.length() == 6)
    // {
    //     cout << num[0] << num[1] << num[2] << "," << num[3] << num[4] << num[5];
    // }
    // else if (num.length() == 5)
    // {
    //     cout << num[0] << num[1] << "," << num[2] << num[3] << num[4];
    // }
    // else
    // {
    //     cout << num[0] << "," << num[1] << num[2] << num[3];
    // }

    num = num.insert(num.length() - 3, ",");

    cout << num;
}