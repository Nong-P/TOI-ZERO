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

int main()
{
    int W, H, M, N;
    vector<int> vW = {0}, vH = {0};

    cin >> W >> H >> M >> N;
    vW.push_back(W);
    vH.push_back(H);

    for (int i = 0; i < M; i++)
    {
        int iW;
        cin >> iW;
        vW.push_back(iW);
    }

    for (int i = 0; i < N; i++)
    {
        int iH;
        cin >> iH;
        vH.push_back(iH);
    }

    sort(vW.begin(), vW.end());
    sort(vH.begin(), vH.end());

    long long wGap1 = 0, wGap2 = 0, hGap1 = 0, hGap2 = 0;

    for (int i = 1; i < vW.size(); i++)
    {
        int cGap = vW[i] - vW[i - 1];
        if (cGap > wGap1)
        {
            wGap2 = wGap1;
            wGap1 = cGap;
        }
        else if (cGap > wGap2)
        {
            wGap2 = cGap;
        }
    }

    for (int i = 1; i < vH.size(); i++)
    {
        int cGap = vH[i] - vH[i - 1];
        if (cGap > hGap1)
        {
            hGap2 = hGap1;
            hGap1 = cGap;
        }
        else if (cGap > hGap2)
        {
            hGap2 = cGap;
        }
    }

    vector<long long> bread;
    bread.push_back(hGap1 * wGap1);
    bread.push_back(hGap1 * wGap2);
    bread.push_back(hGap2 * wGap1);
    bread.push_back(hGap2 * wGap2);

    sort(bread.begin(), bread.end());

    cout << bread[3] << " "
         << bread[2];
}