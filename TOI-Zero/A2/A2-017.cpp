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

char sizes, type, topping;
int nTopping = 0;

void input()
{
    cin >> sizes >> type;
    cin >> topping;
    if (topping == 'P' || topping == 'E')
    {
        cin >> nTopping;
    }
}

int ramenCal, toppingCal;

void cal()
{
    if (sizes == 'S')
    {
        if (type == 'R')
        {
            ramenCal = 60;
        }
        else if (type == 'T')
        {
            ramenCal = 80;
        }
    }
    else if (sizes == 'M')
    {
        if (type == 'R')
        {
            ramenCal = 80;
        }
        else if (type == 'T')
        {
            ramenCal = 100;
        }
    }
    else if (sizes == 'L')
    {
        if (type == 'R')
        {
            ramenCal = 100;
        }
        else if (type == 'T')
        {
            ramenCal = 120;
        }
    }

    if (topping == 'P')
    {
        toppingCal = 15 * nTopping;
    }
    else if (topping == 'E')
    {
        toppingCal = 10 * nTopping;
    }
    else
    {
        toppingCal = 0;
    }
}

int main()
{
    input();
    cal();
    cout << ramenCal + toppingCal;
}