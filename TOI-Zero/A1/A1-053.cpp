#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
    int R1, B1, G1, R2, B2, G2, R3, G3, B3;
    cin >> R1 >> G1 >> B1;
    cin >> R2 >> G2 >> B2;

    R3 = (R1 + R2) / 2;
    G3 = (G1 + G2) / 2;
    B3 = (B1 + B2) / 2;

    cout << R3 << " " << G3 << " " << B3;
}