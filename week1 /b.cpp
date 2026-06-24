#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = n/7; i >=0; i-=1) {
    if ((n - 7 * i) % 4 == 0){
      cout << string((n - 7 * i) / 4, '4') + string( i, '7');
    return 0;}
  }
  cout << "-1";
}