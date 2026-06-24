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
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    int right = 0, rounds = 0;
    long long sum = 0;
    while (right < n) {
      while (sum < l && (sum + v[right] <= r || sum == 0)) {
        sum += v[right];
        right++;
        if (right == n)
          break;
      }
      if (sum <= r && sum >= l)
        rounds++;
      sum = 0;
    }
    cout << rounds << endl;
  }
}