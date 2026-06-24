#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int m = 0;
  int cur = 0, best = -1e9;
  for (int i = 0; i < n; i += 1) {
    int x;
    cin >> x;
    if (x == 1) {
      x = -1;
      m += 1;
    } else
      x = 1;
    cur = max(x, cur + x);
    best = max(cur, best);
  }

  cout << m + best;
}
