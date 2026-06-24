#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int mn = 0, sum = 0, pos = 1;
  for (int i = 0; i < n; i++) {
    if (i < k) {
      sum += v[i];
      mn += v[i];
    } else {
      sum += v[i] - v[i - k];
      if (mn > sum) {
        mn = sum;
        pos = i - k + 2;
      }
    }
  }
  cout << pos << endl;
}