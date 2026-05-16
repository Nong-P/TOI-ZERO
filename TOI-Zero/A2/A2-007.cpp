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

using namespace std;

int main()
{
    int N, M;
    struct tank
    {
        int nTank, l, r, parent = -1, takePoint = 0;
        vector<int> child;
        bool isTake = false;
    };

    cin >> N >> M;
    vector<tank> vTank(N);

    for (int i = 0; i < N; i++)
    {
        vTank[i].nTank = i;
        cin >> vTank[i].l >> vTank[i].r;
    }

    for (int i = 0; i < M; i++)
    {
        int n;
        cin >> n;
        vTank[n - 1].isTake = true;
    }

    sort(vTank.begin(), vTank.end(), [](const tank &a, const tank &b)
         { int areaA = a.r - a.l;
        int areaB =  b.r - b.l; 
        return areaA < areaB; });

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (vTank[j].l <= vTank[i].l && vTank[j].r >= vTank[i].r)
            {
                vTank[j].child.push_back(vTank[i].nTank);
                vTank[i].parent = vTank[j].nTank;
                break;
            }
        }
    }

    vector<int> tankIndex(N);
    for (int i = 0; i < N; i++)
    {
        tankIndex[vTank[i].nTank] = i;
    }

    // คำนวณ takepoint
    function<void(int)> clearChildren = [&](int nTank)
    {
        for (int childTank : vTank[tankIndex[nTank]].child)
        {
            vTank[tankIndex[childTank]].takePoint = 0;
            clearChildren(childTank);
        }
    };

    int currentP;

    for (int i = 0; i < N; i++)
    {
        currentP = vTank[i].parent;
        if (vTank[i].isTake)
        {
            vTank[i].takePoint++;
            while (currentP != -1)
            {
                vTank[tankIndex[currentP]].takePoint++;
                currentP = vTank[tankIndex[currentP]].parent;
            }
        }
    }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << "tankIndex[" << i << "]=" << tankIndex[i] << endl;
    // }

    vector<int> vRoot;

    for (int i = 0; i < N; i++)
    {
        if (vTank[i].parent == -1 && vTank[i].takePoint != 0)
        {
            vRoot.push_back(vTank[i].nTank);
        }
    }

    sort(vRoot.begin(), vRoot.end());
    sort(vTank.begin(), vTank.end(), [](const tank &a, const tank &b)
         { int areaA = a.r - a.l;
        int areaB =  b.r - b.l; 
        return areaA > areaB; });

    for (int i = 0; i < N; i++)
    {
        tankIndex[vTank[i].nTank] = i;
    }

    vector<int> ans;

    for (int i = 0; i < N; i++)
    {

        if (vTank[i].takePoint == 0)
            continue;

        bool isShouldPick = true;
        for (int childTank : vTank[i].child)
        {
            if (vTank[tankIndex[childTank]].takePoint == vTank[i].takePoint)
            {
                isShouldPick = false;
                break;
            }
        }
        // cout << "nTank=" << vTank[i].nTank
        //      << " isShouldPick=" << isShouldPick << endl;

        if (isShouldPick)
        {
            ans.push_back(vTank[i].nTank);
            clearChildren(vTank[i].nTank);
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            cout << ans[i] + 1;
            break;
        }
        cout << ans[i] + 1 << " ";
    }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << "nTank=" << vTank[i].nTank << " takePoint=" << vTank[i].takePoint << " parent=" << vTank[i].parent << endl;
    //     for (int j = 0; j < vTank[i].child.size(); j++)
    //     {
    //         cout << "nTank=" << vTank[i].nTank << " child=" << vTank[i].child[j];
    //     }
    // }
}