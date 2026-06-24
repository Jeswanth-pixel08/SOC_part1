#include <iostream>
#include<string>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int skip = 0;
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int pos = -1;
    while (pos < n) {
      int new_pos = pos;
      if (pos == -1 || s[pos] == 'L') {
        if (pos + m > n - 1)
          skip = 1;
        else {
          for (int i = m; i > 0; i--) {
            if (s[pos + i] == 'L') {
              new_pos = pos + i;
              break;
            }
          }
          if (new_pos == pos && k != 0)
            for (int i = m; i > 0; i--) {
              if (s[pos + i] == 'W') {
                new_pos = pos + i;
                break;
              }
            }
          if (new_pos == pos)
            skip = -1;
          pos = new_pos;
        }
      } else if (s[new_pos] == 'W') {
        if (new_pos == n - 1) {
          if (k > 0)
            skip = 1;
          if (k == 0)
            skip = -1;
        } else {
          while (s[new_pos + 1] == 'W') {
            new_pos++;
            k--;
            if (k < 0) {
              skip = -1;
              break;
            }
          }
          if (new_pos == n - 1){
            pos=new_pos;
            }
          else {
            if (s[new_pos + 1] == 'L') {
              new_pos++;
              k--;
              if(k<0) 
              pos=new_pos;
              continue;
            } else if (s[new_pos + 1] == 'C') {
              skip = -1;
            }
          }
        }
      } else if (new_pos == pos) {
        skip = -1;
      }
      pos = new_pos;
      if (skip != 0)
        break;
    }
    if (skip == -1)
      cout << "no" << endl;
    else if (skip == 1)
      cout << "yes" << endl;
  }
}