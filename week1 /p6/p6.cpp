#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int m = 0;
  char a ,b;
  cin >>a;
  for(int i=1 ;i<n;i+=1){
    cin >>b;
    if(b!=a) m+=1;
    a=b;
  }

  cout << n - m - 1;
}