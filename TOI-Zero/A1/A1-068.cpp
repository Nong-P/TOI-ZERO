#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <numeric>

using namespace std;

int main()
{
    float subject, total_score;
    cin >> subject;
    vector<float> score(subject);

    for (int i = 0; i < subject; i++)
    {
        cin >> score[i];
    }

    if (all_of(score.begin(), score.end(), [](int s)
               { return s >= 50; }) &&
        (accumulate(score.begin(), score.end(), 0.0) / score.size()) >= 60)
    {
        cout << fixed << setprecision(1) << (accumulate(score.begin(), score.end(), 0.0) / score.size()) << endl;
        cout << "PASS";
    }
    else
    {
        cout << fixed << setprecision(1) << (accumulate(score.begin(), score.end(), 0.0) / score.size()) << endl;
        cout << "FAIL";
    }
}