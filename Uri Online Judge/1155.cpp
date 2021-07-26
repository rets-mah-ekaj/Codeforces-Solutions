#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double s = 0;
  for (double i = 1; i <= 100; ++i)
    s += 1.0 / i;
  cout << fixed << setprecision(2) << s << '\n';
  return 0;
}
