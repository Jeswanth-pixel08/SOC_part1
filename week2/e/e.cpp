#include <algorithm>
#include <iostream>
#include <map>
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
    vector<long long> s = v;
    sort(s.begin(), s.end());
    vector<long long> sum(n);
    for (int i = 0; i < n; i++)
      if (i == 0)
        sum[0] = s[0];
      else {
        sum[i] = sum[i - 1] + s[i];
      }
    map<long long, long long> result;
    for (int i = n - 1; i >= 0; i--) {
      if (i == n - 1)
        result[s[i]] = i;
      else {
        result[s[i]] = (sum[i] >= s[i + 1]) ? result[s[i + 1]] : i;
      }
    }
    for (int i = 0; i < n; i++)
      cout << result[v[i]] << " ";
    cout << endl;
  }
}