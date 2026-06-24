#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int p = n - 1;
    for (int i = 0; i < n; i++) {
      if (a[i + 1] > b[i]) {
        p = i;
        break;
      }
    }
    string str = a.substr(0, p + 1) + b.substr(p);
    cout << str << endl;
    int count = 1;
    for (int i = p - 1; i >= 0; i--) {
      if (a[i + 1] == b[i]) {
        count++;
      } else
        break;
    }
    cout << count << endl;
  }
}