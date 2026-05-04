#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <numeric>

using namespace std;

int main()
{
    int N, ans = 0, x, y;
    vector<pair<float, float>> xy;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        xy.push_back({x, y}); // จุด A i,C j แทยง
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j != i)
            {
                // // หาเส้นแทยง1
                // float Mx1 = (xy[i].first + xy[j].first) / 2;
                // float My1 = (xy[i].second + xy[j].second) / 2;

                // float dx = ((xy[j].first - xy[i].first) / 2) * -1;
                // float dy = ((xy[j].second - xy[i].second) / 2) * -1;

                // // จุด B
                // float Bx = (Mx1 - dy);
                // float By = (My1 + dx);
                // // จุด D
                // float Dx = (Mx1 + dy);
                // float Dy = (My1 - dx);

                // // // หาเส้นแทยง2
                // // float Mx2 = (Bx - Dx) / 2;
                // // float My2 = (By - Dy) / 2;

                // // หาด้าน 4 ด้าน AB BC CD DA
                // float sideAB = pow(Bx - xy[i].first, 2) + pow(By - xy[i].second, 2);

                // float sideBC = pow(xy[j].first - Bx, 2) + pow(xy[j].second - By, 2);

                // float sideCD = pow(Dx - xy[j].first, 2) + pow(Dy - xy[j].second, 2);

                // float sideDA = pow(xy[i].first - Dx, 2) + pow(xy[i].second - Dy, 2);

                // // หาเส้นแทยง2มุม AC BD
                // float diagonalAC = pow(xy[j].first - xy[i].first, 2) + pow(xy[j].second - xy[i].second, 2);

                // float diagonalBD = pow(Dx - Bx, 2) + pow(Dy - By, 2);

                // if (sideAB == sideBC && sideBC == sideCD && sideCD == sideDA && diagonalAC == diagonalBD)
                // {
                //     areaV.push_back(sideAB);
                // }

                int dx = abs(xy[j].first - xy[i].first);
                int dy = abs(xy[j].second - xy[i].second);

                int area = min(dx, dy);
                ans = max(ans, area);
            };
        }
    }

    cout << ans;
}