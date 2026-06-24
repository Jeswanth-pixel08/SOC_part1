#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int pos = -1;
    for (int i = 0; i < n; i++) {
      if (s[i] != '?') {
        pos = i;
        break;
      }
    }
    if (pos == -1) {
      for (int i = 0; i < n; i++) {
        s[i] = {i % 2 == 0 ? 'B' : 'R'};
      }
    } else {
      for (int i = pos - 1; i > -1; i--) {
        s[i] = {s[i + 1] == 'B' ? 'R' : 'B'};
      }
      for (int i = pos + 1; i < n; i++) {
        if (s[i] == '?') {
          s[i] = {s[i - 1] == 'B' ? 'R' : 'B'};
        }
      }
    }
    cout << s << endl;
  }
}
