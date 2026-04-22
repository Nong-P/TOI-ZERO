#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, mnum;

    cin >> num1 >> num2 >> num3;

    mnum = num1;

    if (num2 > mnum) {
        mnum = num2;
    }
    if (num3 > mnum) {
        mnum = num3;
    }

    cout << mnum << endl;

    return 0;
}