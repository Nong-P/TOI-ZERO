#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1, num2, num3, even = 0, odd = 0;

    cin >> num1 >> num2 >> num3;

    if (num1 % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }

    if (num2 % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }

    if (num3 % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }

    cout << "even " << even << endl;
    cout << "odd " << odd;
}