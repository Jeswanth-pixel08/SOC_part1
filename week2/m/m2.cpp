#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long merge_count(vector<long long> &a, int l, int r) {
  if (r - l <= 1)
    return 0;
  int m = (l + r) / 2;
  long long ans = merge_count(a, l, m) + merge_count(a, m, r);
  vector<long long> temp;
  int i = l, j = m;
  while (i < m && j < r) {
    if (a[i] <= a[j]) {
      temp.push_back(a[i++]);
    } else {
      ans += m - i;
      temp.push_back(a[j++]);
    }
  }

  while (i < m)
    temp.push_back(a[i++]);
  while (j < r)
    temp.push_back(a[j++]);

  for (int k = l; k < r; k++)
    a[k] = temp[k - l];

  return ans;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<pair<long long, long long>> p(n);

    for (int i = 0; i < n; i++)
      cin >> p[i].first >> p[i].second;

    sort(p.begin(), p.end());

    vector<long long> b(n);

    for (int i = 0; i < n; i++)
      b[i] = p[i].second;

    cout << merge_count(b, 0, n) << '\n';
  }
}