#include <iostream>
using namespace std;

int main() {
int t;
cin >>t;
while (t--){
    int n;
    cin >> n;
    int coins = 0;
    char prev;
    for (int i = 0; i < n; i++) {
      char x;
      cin >> x;
      if (x == '@')
        coins++;
      if (i > 0) {
        if (x == '*' && prev == '*'){
          for (int j = i + 1; j < n; j++) {
            char x;
            cin >> x;
          }
        break;
      }}
      prev = x;
    }
    cout << coins << endl;
  }}
