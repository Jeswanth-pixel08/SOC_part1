#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    map<int, int> first, last;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (!(first.count(x))) {
        first[x] = i;
      }
      last[x] = i;
    }
    while (k--) {
      int a, b;
      cin >> a >> b;
      if (!first.count(a) || !last.count(b))
        cout << "NO"<<endl;
      else
        cout << (first[a] < last[b] ? "YES" : "NO") << endl;
    }
  }
}