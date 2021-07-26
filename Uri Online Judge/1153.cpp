#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, t = 1;
  cin >> n;
  if (n == 0)
    cout << 0 << '\n';
  else {
    for (int i = 1; i <= n; ++i)
      t *= i;
    cout << t << '\n';
  }
  return 0;
}
