#include <iostream>
using namespace std;

bool distinct(int n) {
  int a = n % 10;
  int b = (n / 10) % 10;
  int c = (n / 100) % 10;
  int d = (n / 1000) % 10;

  if (a == b || a == c || a == d || b == c || b == d | c == d)
    return 0;
  else
    return 1;
}

int year(int n) {

  for (int i = n + 1;; i++) {

    if (distinct(i))
      return i;
  }
}

int main() {
  int n;
  cin >> n;
  cout << year(n);
}
