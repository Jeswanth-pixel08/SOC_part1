#include <iostream>
#include<algorithm>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long mn = 1e9;
    long long mx = 0;
    for (int i = 0; i < n; i++) {
      long long x;
      cin >> x;
      mn = min(mn, x);
      mx = max(mx, x);
    }
    cout << mx - mn << endl;
  }
}