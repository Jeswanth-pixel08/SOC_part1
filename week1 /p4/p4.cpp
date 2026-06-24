#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int m = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (b - a > 1)
      m += 1;
  }
  cout << m;
}