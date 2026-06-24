#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> curr(3, 0);
  vector<int> prev(3, 0);
  for (int i = 0; i < n; i++) {
    curr ={101,101,101};
    int x;
    cin >> x;
    curr[0] = min({prev[0], prev[1], prev[2]}) + 1;
    if (x == 1 || x == 3) {
      curr[1] = min(prev[2], prev[0]);
    }
    if (x == 2 || x == 3) {
      curr[2] = min(prev[1], prev[0]);
    }
    prev=curr;
  }
  cout<<min({curr[0],curr[1],curr[2]})<<endl;
}