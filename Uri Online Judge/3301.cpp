#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, c;
  cin >> a >> b >> c;
  if (a > b) {
    if (b > c)
      cout << "zezinho\n";
    else if (a > c)
      cout << "luisinho\n";
    else
      cout << "huguinho\n";
  }
  else {
    if (a > c)
      cout << "huguinho\n";
    else if (b > c)
      cout << "luisinho\n";
    else
      cout << "zezinho\n";
  }
  return 0;
}
