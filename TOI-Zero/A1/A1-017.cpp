#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int y1, m1, d1, y2, m2, d2, f1, f2;

    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

    // if (y1 == y2) {
    //     if (m1 == m2) {
    //         if (d1 == d2) {
    //             cout << "0";
    //         } else if (d1 < d2) {
    //             cout << "1";
    //         } else {
    //             cout << "2";
    //         }
    //     } else if (m1 < m2) {
    //         cout << "1";
    //     } else {
    //         cout << "2";
    //     }
    // } else if (y1 < y2) {
    //     cout << "1";
    // } else {
    //     cout << "2";
    // }

    f1 = (y1 * 365) + (m1 * 30) + d1;
    f2 = (y2 * 365) + (m2 * 30) + d2;

    if (f1 == f2) {
        cout << "0";
    } else if (f1 < f2) {
        cout << "1";
    } else {
        cout << "2";
    }

    return 0;
}