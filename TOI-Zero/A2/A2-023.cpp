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

// A อย่างน้อย 1 ตัวยาวเท่าไหร่ฤ็ได้ตามหลังตัว R เสมอ
// จะเขียนตัว I หรือ T ตามหลังตัว B ตัว IT จะมีฤี่ตัวฤ็ได้และไม่จำเป็นต้องตามหลังตัว T
// if yes นับตัว A ที่ยาวติดฤันที่สุด
// if no ให้แสดง ingex ของตัวที่ผิดตัวแรฤ
// if มีแต่ตัว I T เป็น unknow ตามด้วย length

string rabbitLang;

void input()
{
    cin >> rabbitLang;
}

bool isUnknown = true;
int countA = 0;

void collectData()
{
    for (int i = 0; i < rabbitLang.length(); i++)
    {
        if (rabbitLang[i] == 'A' || rabbitLang[i] == 'a')
        {
            int tempA = 0;
            int j = i;
            for (; j < rabbitLang.length(); j++)
            {
                if (rabbitLang[j] == 'A' || rabbitLang[j] == 'a')
                {
                    tempA++;
                    if (tempA > countA)
                    {
                        countA = tempA;
                    }
                }
                else
                {
                    break;
                }
            }

            i = j - 1;

            isUnknown = false;
            continue;
        }
        if (rabbitLang[i] == 'I' || rabbitLang[i] == 'i' || rabbitLang[i] == 'T' || rabbitLang[i] == 't')
        {
            continue;
        }
        else
        {
            isUnknown = false;
        }
    }
}

int main()
{
    input();
    collectData();

    if (isUnknown)
    {
        cout << "unknown " << rabbitLang.length();
        return 0;
    }
    else
    {
        for (int i = 0; i < rabbitLang.length(); i++)
        {
            if (rabbitLang[i] != 'R' && rabbitLang[i] != 'r' && rabbitLang[i] != 'A' && rabbitLang[i] != 'a' && rabbitLang[i] != 'B' && rabbitLang[i] != 'b' && rabbitLang[i] != 'I' && rabbitLang[i] != 'i' && rabbitLang[i] != 'T' && rabbitLang[i] != 't')
            {
                cout << "no " << i;
                return 0;
            }

            if (rabbitLang[i] == 'R' || rabbitLang[i] == 'r')
            {
                if (i == rabbitLang.length() - 1)
                {
                    cout << "no " << i;
                    return 0;
                }
                if (rabbitLang[i + 1] != 'A' && rabbitLang[i + 1] != 'a')
                {
                    cout << "no " << i + 1;
                    return 0;
                }
            }

            if (rabbitLang[i] == 'B' || rabbitLang[i] == 'b')
            {
                if (i == rabbitLang.length() - 1)
                {
                    cout << "no " << i;
                    return 0;
                }
                if (rabbitLang[i + 1] != 'I' && rabbitLang[i + 1] != 'i' && rabbitLang[i + 1] != 'T' && rabbitLang[i + 1] != 't')
                {
                    cout << "no " << i + 1;
                    return 0;
                }
            }

            if (rabbitLang[i] == 'A' || rabbitLang[i] == 'a')
            {
                if (i == 0)
                {
                    cout << "no " << i;
                    return 0;
                }
                if (rabbitLang[i - 1] != 'R' && rabbitLang[i - 1] != 'r' && rabbitLang[i - 1] != 'A' && rabbitLang[i - 1] != 'a')
                {
                    cout << "no " << i;
                    return 0;
                }
            }
        }

        cout << "yes " << countA;
    }
}