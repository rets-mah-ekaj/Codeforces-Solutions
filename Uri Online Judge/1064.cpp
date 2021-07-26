#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  float total = 0, c = 0, x;
  for (int i = 0; i < 6; ++i) {
    cin >> x;
    if (x > 0) {
      ++c;
      total += x;
    }
  }
  cout << c << " valores positivos\n";
  cout << fixed << setprecision(1) << total / c << '\n';
  return 0;
}
