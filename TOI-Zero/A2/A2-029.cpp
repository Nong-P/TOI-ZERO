#include <algorithm>
#include <cctype>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int n;

void input() { cin >> n; }

int main() {
  input();

  for (int i = 1; i <= n; i++) {
    if (i == n) {
      for (int j = 1; j <= n; j++) {
        cout << "0 ";
      }
    } else {
      for (int j = 1; j <= i; j++) {
        if (j == 1) {
          cout << "0 ";
        } else if (j == i) {
          cout << "0 ";
        } else {
          cout << "1 ";
        }
      }
    }
    cout << endl;
  }
}