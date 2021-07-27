#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, x, y;
  cin >> t;
  while (t--) {
    cin >> x >> y;
    if (x % 2 == 0)
      ++x;
    int total = 0;
    while (y--) {
      total += x;
      x += 2;
    }
    cout << total << '\n';
  }
  return 0;
}
