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
vector<int> artifact;
map<int, int> kuyArtifact;

void input() {
  cin >> n;
  artifact.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> artifact[i];
  }
}

void cal() {
  for (int i = 0; i < n; i++) {
    kuyArtifact[artifact[i]]++;
  }
}

int main() {
  input();
  cal();

  for (auto const &[key, val] : kuyArtifact) {
    if (val == 1) {
      cout << key << " ";
    }
  }
}