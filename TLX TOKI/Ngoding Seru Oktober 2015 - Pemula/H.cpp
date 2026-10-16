#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool uppercase, lowercase, number, special;
  uppercase = lowercase = number = special = false;
  int count_alphabets = 0;
  for (auto c : s) {
    if ((int)c >= 65 && (int)c <= 90) {
      uppercase = true;
      count_alphabets++;
    } else if ((int)c >= 97 && (int)c <= 122) {
      lowercase = true;
      count_alphabets++;
    } else if ((int)c >= 48 && (int)c <= 57)
      number = true;
    else
      special = true;
  }
  if (s.size() >= 8 && uppercase && lowercase && number && special)
    cout << "Kuat";
  else if (count_alphabets >= 12)
    cout << "AgakKuat";
  else
    cout << "Lemah";
  return 0;
}
