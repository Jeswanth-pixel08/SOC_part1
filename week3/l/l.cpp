#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    sort(v.begin(), v.end(), greater<long long>());
    long long a_sum = 0, b_sum = 0;
    for (int i = 0; i < n; i += 2) {
      if (v[i] % 2 == 0)
        a_sum += v[i];
    }
    for (int i = 1; i < n; i += 2) {
      if (v[i] % 2 != 0)
        b_sum += v[i];
    }
    if (a_sum > b_sum)
      cout << "Alice" << endl;
    else if (b_sum > a_sum)
      cout << "Bob" << endl;
    else
      cout << "Tie" << endl;
  }
}
