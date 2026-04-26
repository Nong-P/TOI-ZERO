#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int num, cal = 0;
    vector<int> menu = {100, 120, 200, 60, 0};

    while (num != 5)
    {
        cin >> num;
        cal = cal + menu[num - 1];
    }

    cout << "Bye Bye" << endl;
    cout << "Total Calories: " << cal;
}