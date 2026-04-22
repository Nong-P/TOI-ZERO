#include <iostream>

using namespace std;

int main()
{
    int money, coin10, coin5, coin2, coin1;

    cin >> money;

    coin10 = money / 10;
    money = money % 10;
    coin5 = money / 5;
    money = money % 5;
    coin2 = money / 2;
    money = money % 2;
    coin1 = money / 1;
    money = money % 1;

    cout << "10 = " << coin10 << endl;
    cout << "5 = " << coin5 << endl;
    cout << "2 = " << coin2 << endl;
    cout << "1 = " << coin1 << endl;

    return 0;
}