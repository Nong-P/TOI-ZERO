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

int main() {
  vector<int> num(3);

  for (int i = 0; i < 3; i++) {
    cin >> num[i];
    cout << "Input number " << i + 1 << " stored." << endl;
  }

  int n;
  cin >> n;

  if (n == 0) {
    return 0;
  }

  if (n == 1) {
    cout << "Original order: ";
    for (int i = 0; i < 3; i++) {
      cout << num[i] << " ";
    }
    return 0;
  }

  if (n == 2) {
    cout << "Descending order: ";
    sort(num.begin(), num.begin() + 3, greater<int>());
    for (int i = 0; i < 3; i++) {
      cout << num[i] << " ";
    }
    return 0;
  }

  if (n == 3) {
    cout << "Ascending order: ";
    sort(num.begin(), num.begin() + 3);
    for (int i = 0; i < 3; i++) {
      cout << num[i] << " ";
    }
    return 0;
  }
}