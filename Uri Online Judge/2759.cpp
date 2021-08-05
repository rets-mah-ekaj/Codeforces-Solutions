#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  char a, b, c;
  cin >> a >> b >> c;
  cout << "A = " << a << ", B = " << b << ", C = " << c << '\n';
  cout << "A = " << b << ", B = " << c << ", C = " << a << '\n';
  cout << "A = " << c << ", B = " << a << ", C = " << b << '\n';
  return 0;
}
