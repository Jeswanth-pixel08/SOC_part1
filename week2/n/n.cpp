#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    vector<int> x(n);
    for (int i = 0; i < n; i++)
      cin >> x[i];
    vector<long long> hp(n + 1, 0);
    for (int i = 0; i < n; i++) {
      hp[abs(x[i])] += a[i];
    }
    long long pref = 0;
    string str = "yes";
    for (int d = 1; d <= n; d++) {
      pref += hp[d];

      if (pref > d * k) {
        str = "no";
        break;
      }
    }

    cout << str << endl;
  }
}