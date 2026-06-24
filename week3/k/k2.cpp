#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    long long l, r;
    cin >> n >> l >> r;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    int ans = 0;
    long long sum = 0;
    int right = 0;
    for (int left = 0; left < n; left++) {
      while (right < n && sum < l) {
        sum += a[right++];
      }
      if (l <= sum && sum <= r) {
        ans++;
        sum = 0;
        left = right - 1;
      } else if (sum > r) {
        sum -= a[left];
      } else {
        break;
      }
    }

    cout << ans << endl;
  }
}