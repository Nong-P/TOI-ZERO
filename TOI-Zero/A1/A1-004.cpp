#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int exscore, midscore, finalscore;

    cin >> exscore >> midscore >> finalscore;

    exscore = min(exscore, 10);
    midscore = min(midscore, 40);
    finalscore = min(finalscore, 50);

    if (exscore < 5 || midscore < 20 || finalscore < 25) {
        cout << "fail";
    } else {
        cout << "pass";
    }

    return 0;
}