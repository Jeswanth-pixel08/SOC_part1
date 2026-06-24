#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    sort(v.begin(), v.end());

    if (v[0] != 1) {
      cout << "no" << endl;
      continue;
    }
    long long sum = 1;
    string str = "yes";
    for (int i = 1; i < n; i++) {
      if (v[i] > sum) {
        str = "no";
        break;
      } else {
        sum += v[i];
      }
    }
    cout << str << endl;
  }
}