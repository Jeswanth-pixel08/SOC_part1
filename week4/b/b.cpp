#include <iostream>
using namespace std;
const long long mod = 1000000007LL;
int main() {
  int t, k;
  cin >> t >> k;
  int b_mx = 0;
  int in[t][2];
  for (int i = 0; i < t; i++) {
    cin >> in[i][0] >> in[i][1];
    b_mx = max(b_mx, in[i][1]);
  }

  long long dp[b_mx + 1];
  dp[0] = 1LL;

  for (int i = 1; i < b_mx + 1; i++) {
    dp[i] = dp[i - 1] % mod;
    if (i >= k)
      dp[i] = (dp[i] + dp[i - k]) % mod;
  }

  long long sum[b_mx + 1];
  sum[0] = dp[0];
  for (int i = 1; i < b_mx + 1; i++) {
    sum[i] = (sum[i - 1] + dp[i]) % mod;
  }
  for (int i = 0; i < t; i++) {
    cout << (sum[in[i][1]] - sum[in[i][0] - 1] + mod) % mod << endl;
  }
}