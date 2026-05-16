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

// ถ้ามีรถที่ราคาถูกกว่าแต่ประสิทธิภาพดีกว่าจะขายไม่ออกทันที
// output จำนวนรถที่ขายไม่ออก

int N;
vector<pair<int, int>> cars;

void input()
{
    // รับจำนวนเต็ม N
    // อีก N บรรทัดถัดมาระบุข้อมูลของรถยนต์แต่ละรุ่น แทนราคาและประสิทธิภาพ P V
    cin >> N;
    cars.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> cars[i].first >> cars[i].second;
    }
}

int carsCantSellCount = 0, bestCars = -1;

void calcars()
{
    for (int i = N - 1; i >= 0; i--)
    {
        if (cars[i].second < bestCars)
        {
            carsCantSellCount++;
        }
        else
        {
            bestCars = cars[i].second;
        }
    }
}

int main()
{
    input();
    calcars();

    cout << carsCantSellCount;
}