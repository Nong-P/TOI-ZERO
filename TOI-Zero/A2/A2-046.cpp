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
vector<string> str;

void input() {
  cin >> n;
  cin.ignore();
  str.resize(n);

  for (int i = 0; i < n; i++) {
    getline(cin, str[i]);
  }
}

int main() {
  input();

  for (int i = 0; i < n; i++) {
    int vowels = 0, current_consecutive = 0, max_consecutive = 0;

    for (int j = 0; j < str[i].length(); j++) {
      if (str[i][j] == 'A' || str[i][j] == 'a' || str[i][j] == 'E' ||
          str[i][j] == 'e' || str[i][j] == 'I' || str[i][j] == 'i' ||
          str[i][j] == 'O' || str[i][j] == 'o' || str[i][j] == 'U' ||
          str[i][j] == 'u') {
        vowels++;
        current_consecutive++;
        if (current_consecutive > max_consecutive) {
          max_consecutive = current_consecutive;
        }
      } else {
        current_consecutive = 0;
      }
    }

    cout << "Line " << i + 1 << ": " << "vowels " << "= " << vowels << ", "
         << "max_consecutive = " << max_consecutive << endl;
  }
}