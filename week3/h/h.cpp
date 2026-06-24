#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int ans = floor(sqrt(2 * n));
  if (n < ans * (ans + 1) / 2)
    ans--;
  cout << ans << endl;
  int last = n - ans * (ans - 1) / 2;
  for (int i = 1; i < ans; i++)
    cout << i << " ";
  cout << last << endl;
}