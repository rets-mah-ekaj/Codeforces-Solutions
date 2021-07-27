#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double e = 2.0, o = 3.0, total = 0.0;
  while (o != 41) {
    total += o / e;
    o += 2.0;
    e *= 2.0;
  }
  cout << fixed << setprecision(2) << total + 1 << '\n';
  return 0;
}
