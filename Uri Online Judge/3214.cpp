#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int e, f, c, total = 0;
  cin >> e >> f >> c;
  e += f;
  while (e >= c) {
    total += e / c;
    if (e % 2 == 0)
      e /= c;
    else
      e = e / c + (e % c);
  }
  cout << total << '\n';
  return 0;
}
