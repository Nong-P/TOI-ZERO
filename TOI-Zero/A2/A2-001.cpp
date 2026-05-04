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
    struct laser
    {
        int first, second;
        bool isUp = true;
    };
    int nRL, nBL, intersection = 1;
    cin >> nRL >> nBL;

    vector<laser> redLaser(nRL + 1);
    vector<laser> blueLaser(nBL + 1);

    redLaser[0].first = 0;
    for (int i = 0; i < nRL; i++)
    {
        cin >> redLaser[i].second;
        redLaser[i + 1].first = redLaser[i].second;
        if (i % 2 != 0)
        {
            redLaser[i].isUp = false;
        }
    }

    blueLaser[0].first = 0;
    for (int i = 0; i < nBL; i++)
    {
        cin >> blueLaser[i].second;
        blueLaser[i + 1].first = blueLaser[i].second;
        if (i % 2 != 0)
        {
            blueLaser[i].isUp = false;
        }
    }

    // จบจุดเดียวกัน +1
    // เริ่มจุดเดียวกัน ไม่นับ
    // เริ่มฝั่งเดียวกัน นับเริ่มก่อนจบหลัง กับเริ่มหลังจบก่อน
    // เริ่มคนละฝั่ง เริ่มก่อน second จบหลัง first

    for (int i = 0; i < (int)redLaser.size() - 1; i++)
    {
        for (int j = 0; j < (int)blueLaser.size() - 1; j++)
        {
            if (redLaser[i].second == blueLaser[j].second)
            {
                intersection++;
                continue;
            }
            if (redLaser[i].isUp == blueLaser[j].isUp)
            {
                if (redLaser[i].first < blueLaser[j].first && redLaser[i].second > blueLaser[j].second)
                {
                    intersection++;
                    continue;
                }
                if (redLaser[i].first > blueLaser[j].first && redLaser[i].second < blueLaser[j].second)
                {
                    intersection++;
                    continue;
                }
            }
            else
            {
                if (redLaser[i].first < blueLaser[j].second && redLaser[i].second > blueLaser[j].first)
                {
                    intersection++;
                    continue;
                }
            }
        }
    }

    cout << intersection;
}