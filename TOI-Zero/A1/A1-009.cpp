#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int midscore, finalscore;

    cin >> midscore >> finalscore;

    if (midscore + finalscore >= 50) {
        cout << midscore + finalscore << endl;
        cout << "pass";
    } else {
        cout << midscore + finalscore << endl;
        cout << "fail";
    }

    return 0;
}