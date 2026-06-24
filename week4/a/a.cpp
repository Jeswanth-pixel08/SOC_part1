#include <iostream>
#include <vector>
using namespace std;
const long long mod = 1000000007LL;

long long tree(int n, int k, int d) {
  long long dp[n + 1][2];
  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < k + 1; j++) {
      dp[i][j] = 0;
    }
  }
  dp[0][0] = 1LL;
  dp[0][1] = 0LL;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      for (int z = 1; z < k + 1; z++) {
        if (i + z > n)
          continue;
        else {
          if (z < d)
            dp[z + i][j] = (dp[z + i][j] + dp[i][j]) % mod;
          else
            dp[z + i][1] = (dp[z + i][1] + dp[i][j]) % mod;
        }
      }
    }
  }
  return dp[n][1];
}

int main() {
  int n, k, d;
  cin >> n >> k >> d;
  cout << tree(n, k, d);
}