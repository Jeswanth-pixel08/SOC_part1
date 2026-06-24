#include <algorithm>
#include <iostream>
#include <vector>
#include<array>
#include<string>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    vector<int> divisors;
    for (int d = 1; d * d <= n; d++) {
      if (n % d == 0) {
        divisors.push_back(d);
        if (d * d != n)
          divisors.push_back(n / d);
      }
    }
    sort(divisors.begin(), divisors.end());
    for (int d : divisors) {
      vector<array<int, 26>> cnt(d);

      for (int i = 0; i < d; i++)
        cnt[i].fill(0);

      for (int i = 0; i < n; i++)
        cnt[i % d][s[i] - 'a']++;

      int cost = 0;

      for (int r = 0; r < d; r++) {
        int sz = n / d;
        int mx = 0;

        for (int c = 0; c < 26; c++)
          mx = max(mx, cnt[r][c]);

        cost += sz - mx;

        if (cost > 1)
          break;
      }

      if (cost <= 1) {
        cout << d << '\n';
        break;
      }
    }
  }
}