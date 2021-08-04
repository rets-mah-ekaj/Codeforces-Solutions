#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long double x = 0.0;
  int n;
  cin >> n;
  if (n == 0)
    x = 0.0000000000;
  if (n == 1)
    x = 0.5000000000;
  for (int i = 2; i <= n; ++i) {
    if (i == 2) {
      x = 2.0 + (1.00 / 2.00);
      x = 1.0 / x;
    }
    else {
      x = 2.00 + x;
      x = 1.0 / x;
    }
  }
  x += 1.00;
  cout << fixed << setprecision(10) << x << '\n';
  return 0;
}
