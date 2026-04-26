#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, n1;
    vector<int> num;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> n1;
        num.push_back(n1);
    }

    auto v = min_element(num.begin(), num.end());

    cout << *v;
}