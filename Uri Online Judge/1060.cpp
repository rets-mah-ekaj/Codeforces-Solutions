#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double x, c = 0;
  for (int i = 0; i < 6; ++i) {
    cin >> x;
    if (x > 0)
      ++c;
  }
  cout << c << " valores positivos\n";
  return 0;
}
