#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<long long> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int len = 1;
  int mx = 1;
  for (int i = 0; i < n-1; i++) {
      if (v[i + 1] <= 2 * v[i]) {
        len++;
      } else {
        len = 1;
      }
    
    mx = max(mx, len);
  }
  cout << mx << endl;
}