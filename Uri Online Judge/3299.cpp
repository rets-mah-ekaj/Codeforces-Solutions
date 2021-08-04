#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  bool x = false;
  cin >> s;
  for (int i = 0; i < s.length() - 1; ++i) {
    if (s[i] == '1' && s[i + 1] == '3') {
      x = true;
      break;
    }
  }
  cout << s << ((x == true) ? " es de Mala Suerte" : " NO es de Mala Suerte") << '\n';
  return 0;
}
