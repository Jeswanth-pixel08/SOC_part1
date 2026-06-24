#include <iostream>
#include <string>
using namespace std;

string translate(string str1, string str2) {
  if (str1.size() != str2.size())
    return "NO";
  for (int i = 0; i < str1.size(); i += 1) {
    if (str1[str1.size() - 1 - i] != str2[i])
      return "NO";
  }
  return "YES";
}

int main() {
  string str1, str2;
  cin >> str1 >> str2;
  cout << translate(str1, str2);
}