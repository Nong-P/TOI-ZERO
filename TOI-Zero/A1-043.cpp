#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

// รับคะแนนหลัก, คะแนนโบนัส, จำนวนวันที่เล่น

// ต้องคำนวณคะแนนรวม, รหัสลำดับ, รหัสสถานะพิเศษ

// คะแนนรวม = คะแนนหลัก + คะแนนโบนัส ถ้ามากกว่า3วัน * 1.5

// รหัสลำดับ ดักคะแนนรวมตามโจทย์

// ถ้ารหัสลำดับ = 5 && จำนวนวันที่เล่น >= 7 แสดง 99
// ถ้ารหัสลำดับ = 4 && คะแนนโบนัส > 300 แสดง 88
// นอกเหลือจากนั้นแสดงเปน 0

int main()
{
    int mscore, bscore, stday, i = 0;
    float ascore;
    vector<int> pscore = {1500, 1000, 500, 200, 0};
    vector<int> p = {5, 4, 3, 2, 1};
    cin >> mscore >> bscore >> stday;

    if (stday <= 3)
    {
        ascore = mscore + bscore;
    }
    else
    {
        ascore = (mscore + bscore) * 1.5;
    }

    cout << ascore << endl;

    for (int x : pscore)
    {
        if (ascore >= x)
        {
            cout << p[i] << endl;
            if (p[i] == 5 && stday >= 7)
            {
                cout << "99";
            }
            else if (p[i] == 4 && bscore > 300)
            {
                cout << "88";
            }
            else
            {
                cout << "0";
            }
            break;
        }
        i++;
    }
}