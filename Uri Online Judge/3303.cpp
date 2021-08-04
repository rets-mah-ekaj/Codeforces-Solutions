#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  cout << ((s.length() >= 10) ? "palavrao" : "palavrinha") << '\n';
  return 0;
}
