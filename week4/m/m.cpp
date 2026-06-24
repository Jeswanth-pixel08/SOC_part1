#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int local = -101, global = -101, num = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 1) {
      num++;
      x = -1;
    } else {
      x = 1;
    }
    local = max(local + x, x);
    global = max(local, global);
  }
  cout<< num + global<<endl;
}