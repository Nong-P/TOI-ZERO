#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <numeric>
#include <map>
#include <functional>
#include <utility>

using namespace std;

string buu;

void input()
{
    cin >> buu;
}

int mostBuu = 0, curentBuu = 0, firstB = -1;
bool isHaveB = false;

void cal()
{
    for (int i = 0; i < buu.length(); i++)
    {
        if (buu[i] == 'B' || buu[i] == 'b')
        {
            isHaveB = true;
            if (firstB == -1)
            {
                firstB = i;
            }
            curentBuu = 0;
            for (int j = i + 1; j < buu.length(); j++)
            {
                if (j + 1 == buu.length())
                {
                    if (buu[j] == 'U' || buu[j] == 'u')
                    {
                        curentBuu++;
                        if (curentBuu > mostBuu)
                        {
                            mostBuu = curentBuu;
                        }
                        break;
                    }
                    else
                    {
                        if (curentBuu > mostBuu)
                        {
                            mostBuu = curentBuu;
                        }
                    }
                }
                else
                {
                    if (buu[j] == 'U' || buu[j] == 'u')
                    {
                        curentBuu++;
                    }
                    else
                    {
                        if (curentBuu > mostBuu)
                        {
                            mostBuu = curentBuu;
                        }
                        break;
                    }
                }
            }
        }
    }
}

int main()
{
    input();
    cal();

    if (mostBuu >= 2)
    {
        cout << "Yes " << mostBuu;
    }
    else if (isHaveB)
    {
        for (int i = 0; i < buu.length(); i++)
        {
            if (i < firstB + 1)
            {
                cout << buu[i];
            }
            else
            {
                cout << "U";
            }
        }
    }
    else if (!isHaveB)
    {
        int Modulo = buu.length() % 3, divide = buu.length() / 3;
        if (Modulo == 2)
        {
            for (int i = 0; i < divide; i++)
            {
                cout << "BUU";
            }
            cout << "BU";
        }
        else if (Modulo == 1)
        {
            for (int i = 0; i < divide; i++)
            {
                cout << "BUU";
            }
            cout << "B";
        }
        else
        {
            for (int i = 0; i < divide; i++)
            {
                cout << "BUU";
            }
        }
    }
}