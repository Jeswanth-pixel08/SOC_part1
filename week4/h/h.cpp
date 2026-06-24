#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, h, l, r;
  cin >> n >> h >> l >> r;
  vector<int> pref(n);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (i == 0)
      pref[0] = x;
    else {
      pref[i] = x + pref[i - 1];
    }
  }
  vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
  dp[0][0] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= i; j++) {
      int t = (pref[i - 1] - j) % h;
      if (t < 0)
        t += h;
      bool good = (t >= l && t <= r);
      if (dp[i - 1][j] != -1) {
        dp[i][j] = max(dp[i][j], dp[i - 1][j] + good);
      }
      if (j > 0 && dp[i - 1][j - 1] != -1) {
        dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + good);
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n + 1; i++) {
    ans = max(ans, dp[n][i]);
  }
  cout << ans << endl;
}