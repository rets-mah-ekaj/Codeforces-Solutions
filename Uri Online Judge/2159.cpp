#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double x, v;
  cin >> x;
  v = x / log(x);
  cout << fixed << setprecision(1);
  cout << v << ' ' << 1.25506 * v << '\n';
  return 0;
}
