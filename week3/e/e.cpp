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
    int flips = 0;

    for (int i = 1; i < n; i++) {
      if (s[i] != s[i - 1])
        flips++;
    }

   cout << max(0, flips - (s[0] == '0')) << endl;
  }
}