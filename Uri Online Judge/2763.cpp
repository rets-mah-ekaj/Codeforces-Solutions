#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == '.' || s[i] == '-')
      cout << '\n';
    else
      cout << s[i];
  }
  cout << '\n';
  return 0;
}
