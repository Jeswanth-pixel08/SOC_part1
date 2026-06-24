#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < 2 * n - 1; i++) {
      if (i == n - 1)
        continue;
      sum += v[i + 1] - v[i];
    }
    cout << sum << endl;
    for (int i = 0; i < n; i++) {
      cout << v[i] << " " << v[i + n] << endl;
    }
  }
}