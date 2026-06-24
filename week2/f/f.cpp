#include <iostream>
#include <map>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<long long, long long> numof;
    for (int i = 0; i < n; i++) {
      long long x;
      cin >> x;
      if (numof.count(x))
        numof[x]++;
      else
        numof[x] = 1;
    }
    long long output = 0;
    auto f = [](long long n) { return n * (n - 1) / 2; };
    for (auto &p : numof) {
      output += f(p.second);
    }
    if (numof.count(1) && numof.count(2))
      output += numof[1] * numof[2];
    cout << output<<endl;
  }
}