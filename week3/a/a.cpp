#include <iostream>
#include<algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int mn = 0, mx = 0;
    for (int i = 1; i < n + 1; i++) {
      int x;
      cin >> x;
      if (x == 1)
        mn = i;
      else if (x == n)
        mx = i;
    }
    int first = min({mn, mx});
    int last = max({mx, mn});
    cout << min({last, n - first + 1, first + n - last + 1})<<endl;
  }
}