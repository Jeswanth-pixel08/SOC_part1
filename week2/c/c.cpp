#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    if (n % 2 ) {
      for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
      }
      cout << "yes" << endl;
    } else {
      long long alt_sum = 0;
      for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (i % 2 == 0)
          alt_sum += x;
        else
          alt_sum -= x;
      }
     cout<<(alt_sum<=0 ? "YES":"NO")<<endl;
    }
  }
}