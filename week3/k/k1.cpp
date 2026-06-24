#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    long long l, r;
    cin >> n >> l >> r;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    int left =0,right = 0, rounds = 0;
    long long sum = 0;

while (right < n) {
    sum += v[right++];

    if (l <= sum && sum <= r) {
        rounds++;
        sum = 0;
        left = right;
    }
    else if (sum > r) {
        sum -= v[left];
        left++;
    }
}
    cout << rounds<<endl;
  }
}