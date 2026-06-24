#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long mx = 0, mn = 0;
    for (int i = 0; i < n; i++) {
      long long x;
      cin >> x;
      mx += x;
      mn += x;
      mx = max(llabs(mx), llabs(mn));
      mn = min(mx, mn);
    }
  cout << mx << endl;
}}
