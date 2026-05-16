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

int n, ticket;
vector<vector<int>> grid;

void input()
{
    cin >> n >> ticket;
    grid.assign(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
}

vector<int> teamA;
vector<int> teamB;

void calFirstRound()
{
    for (int i = 1; i <= n; i += 2)
    {
        teamA.push_back(i);
        teamB.push_back(i + 1);
    }
}

vector<int> tempTeam;

void calBattle()
{
    for (int i = 0; i < teamA.size(); i++)
    {
        if (teamA[i] == grid[teamA[i] - 1][teamB[i] - 1])
        {
            if (teamB[i] == ticket)
            {
                tempTeam.push_back(teamB[i]);
                ticket = -1;
            }
            else
            {
                tempTeam.push_back(teamA[i]);
            }
        }
        else
        {
            if (teamA[i] == ticket)
            {
                tempTeam.push_back(teamA[i]);
                ticket = -1;
            }
            else
            {
                tempTeam.push_back(teamB[i]);
            }
        }
    }

    if (tempTeam.size() == 1)
        return;

    teamA.clear();
    teamB.clear();

    vector<int> nextRound = tempTeam;
    tempTeam.clear();

    for (int i = 0; i < nextRound.size(); i += 2)
    {
        teamA.push_back(nextRound[i]);
        teamB.push_back(nextRound[i + 1]);
    }

    calBattle();
}

int main()
{
    input();
    calFirstRound();
    calBattle();

    cout << tempTeam[0];
}