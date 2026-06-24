#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a == d) {
    if (a != 0) {
      cout << "1";
      return 0;
    } else {
      if (c == 0) {
        cout << "1";
        return 0;
      } 
    }
  }
  cout << "0";
}