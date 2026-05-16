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

int n, counttrue = 0;
vector<vector<char>> grid;
vector<vector<bool>> visit;

void vec()
{
    cin >> n;
    grid.resize(n, vector<char>(n));
    visit.resize(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++)
    {
        string r;
        cin >> r;
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = r[j];
        }
    }
}

void dfs(int r, int c)
{
    if (r < 0 || r >= n || c < 0 || c >= n || grid[r][c] == 'X' || visit[r][c])
    {
        return;
    }

    visit[r][c] = true;
    counttrue++;

    dfs(r - 1, c);
    dfs(r, c - 1);
}

int main()
{
    vec();
    dfs(n - 1, n - 1);
    cout << counttrue;
}