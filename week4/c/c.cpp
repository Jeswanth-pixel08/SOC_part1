#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  int max_val = 100000;
  vector<long long> a(max_val + 1, 0);
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    a[x] += x;
  }
  vector<long long> dp(max_val + 1);
  dp[0] = a[0];
  for (int i = 1; i < max_val + 1; i++) {
    if (i == 1)
      dp[i] = max(dp[i - 1], a[i]);
    else {
      dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    }
  }
  cout << dp[max_val] << endl;
}