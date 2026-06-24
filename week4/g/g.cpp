#include <iostream>
#include<iomanip>
#include<array>
#include <vector>
using namespace std;
double avg(vector<int> adj[], int a, int parent) {
  double sum = 0;
  int cnt = 0;
  for (int r : adj[a]) {
    if (r != parent) {
      sum += avg(adj, r, a);
      cnt++;
    }
  }
  if (cnt == 0)
    return 0;
  return 1.0 + sum / cnt;
}
int main() {
  int n;
  cin >> n;
  vector<int> adj[n + 1];
  for (int i = 1; i < n; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  cout <<fixed<<setprecision(10)<< avg(adj, 1, 0) << endl;
}
