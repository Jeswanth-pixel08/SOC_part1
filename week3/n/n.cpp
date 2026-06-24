#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> cnt(n + 2, 0);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      cnt[x]++;
    }
    bool ok = true;
    for (int i = 1; i <= n; i++) {
      if (cnt[i] == 1) {
        ok = false;
        break;
      }
      if (cnt[i] > 2) {
        cnt[i + 1] += cnt[i] - 2;
        cnt[i] = 2;
      }
    }

    cout << (ok ? "YES" : "NO") << endl;
  }
}