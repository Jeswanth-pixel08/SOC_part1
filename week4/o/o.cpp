#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  int len = 1, ans = 1;
  ;
  long long prev;
  for (int i = 0; i < n; i++) {
    int cur;
    cin >> cur;
    if (i == 0) {
      prev = cur;
    } else {
      if (cur >= prev) {
        len++;
      } else {
        len = 1;
      }
      ans = max(ans, len);
      prev = cur;
    }
  }

  cout << ans << endl;
}