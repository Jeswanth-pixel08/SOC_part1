#include <iostream>
using namespace std;

int main() {
  int n, t;
  cin >> n>>t;
  string str;
  cin >> str;
  for (int i = 0; i < t; i++){
    for (int j = 0; j < str.size(); j += 1) {
      if (str[j] == 'G')
        continue;
      if (str[j + 1] == 'G') {
        str[j] = 'G';
        str[j + 1] = 'B';
        j += 1;
      }
    }}
  cout << str;
}