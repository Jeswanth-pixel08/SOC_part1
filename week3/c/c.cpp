#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n % 2 == 0) {
      int mx = 0;
      for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mx = max(mx, x);
      }
      cout << mx + n / 2 << endl;
      continue;
    } else {
      int mx1 = 0, mx2 = 0;
      for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i % 2 == 0)
          mx1 = max(mx1, x);
        else {
          mx2 = max(mx2, x);
        }}
        cout << max(mx1 + (n + 1) / 2, mx2 + (n - 1) / 2) << endl;
      
    }
  }}