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

  int x, y;
  while (cin >> x >> y) {
    int g = gcd(x, y);
    cout << (x * 2) / g + (y * 2) / g << '\n';
  }
  return 0;
}
