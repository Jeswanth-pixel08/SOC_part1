#include <iostream>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  int init = 0, sum = 0, length = 0;

  int a[n];
  for (int i = 0; i < n; i += 1)
    cin >> a[i];

  for (int i = 0; i < n; i++) {
    sum += a[i];

    while (sum > t) {
      sum -= a[init];
      init += 1;
    }
    length = max(length, i - init + 1);
  }
  cout << length;
}