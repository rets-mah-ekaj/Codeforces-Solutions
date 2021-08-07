#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, x;
  float total = 0;
  cin >> t;
  while (t--) {
    cin >> n >> x;
    switch (n) {
      case 1001: total += x * 1.50; break;
      case 1002: total += x * 2.50; break;
      case 1003: total += x * 3.50; break;
      case 1004: total += x * 4.50; break;
      case 1005: total += x * 5.50; break;
    }
  }
  cout << fixed << setprecision(2) << total << '\n';
  return 0;
}
