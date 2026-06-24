#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(n, vector<int>(m));
    int N = n * m;

    vector<pair<int, int>> posA(N + 1), posB(N + 1);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> A[i][j];
        posA[A[i][j]] = {i, j};
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> B[i][j];
        posB[B[i][j]] = {i, j};
      }
    }

    auto [rA, cA] = posA[1];
    auto [rB, cB] = posB[1];

    vector<int> rowPerm(n), colPerm(m);

    bool ok = true;

    for (int j = 0; j < m; j++) {
      int x = A[rA][j];

      if (posB[x].first != rB) {
        ok = false;
        break;
      }

      colPerm[j] = posB[x].second;
    }

    if (ok) {
      for (int i = 0; i < n; i++) {
        int x = A[i][cA];

        if (posB[x].second != cB) {
          ok = false;
          break;
        }

        rowPerm[i] = posB[x].first;
      }
    }

 
    if (ok) {
      for (int i = 0; i < n && ok; i++) {
        for (int j = 0; j < m; j++) {
          if (A[i][j] != B[rowPerm[i]][colPerm[j]]) {
            ok = false;
            break;
          }
        }
      }
    }

    cout << (ok ? "YES" : "NO") << '\n';
  }

  return 0;
}