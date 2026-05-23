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
vector<int> point;

void input() {
  cin >> n;
  point.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> point[i];
  }
}

int countTop = 0, top;

void cal() {
  for (int i = 0; i < n; i++) {
    if (point[i] == top) {
      countTop++;
    }
  }
}

int main() {
  input();
  top = *max_element(point.begin(), point.end());
  cal();

  cout << top << endl << countTop;
}