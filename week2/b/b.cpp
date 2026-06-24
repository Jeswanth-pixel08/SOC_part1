#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long d;
  cin >> d;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  int teams = 0;
  int rem = n;
  for (int i = n - 1; i >= 0 && rem > 0; i--) {
    if (rem >= d / v[i]+1) {
      teams++;
      rem -= d / v[i]+1;
    }
    else break;
  }
  cout <<teams<<endl;
}