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
using namespace std;

char boba, tea;
int nboba, swtea, ntea;

void input()
{
    cin >> boba >> nboba;
    cin >> tea >> swtea >> ntea;
}

int bobacal, teacal;
vector<int> Rswtier = {12, 18, 25};
vector<int> Tswtier = {15, 20, 30};
vector<int> Mswtier = {10, 15, 20};

void cal()
{
    if (boba == 'H')
    {
        bobacal = nboba * 5;
    }
    else if (boba == 'O')
    {
        bobacal = nboba * 3;
    }
    else if (boba == 'J')
    {
        bobacal = nboba * 2;
    }

    if (tea == 'R')
    {
        teacal = Rswtier[swtea - 1] * ntea;
    }
    else if (tea == 'T')
    {
        teacal = Tswtier[swtea - 1] * ntea;
    }
    else if (tea == 'M')
    {
        teacal = Mswtier[swtea - 1] * ntea;
    }
}

int main()
{
    input();
    cal();
    cout << bobacal + teacal;
}