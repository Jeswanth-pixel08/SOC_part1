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
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a.begin(), a.end());

    vector<long long> v;
    for (int i = 0; i < n; i++) {
      if (i == 0 || a[i] != a[i - 1])
        v.push_back(a[i]);
    }
    int ans = 0;
    int l = 0;

    for (int r = 0; r < v.size(); r++) {
      while (v[r] - v[l] >= n)
        l++;

      ans = max(ans, r - l + 1);
    }

    cout << ans << endl;
  }
}