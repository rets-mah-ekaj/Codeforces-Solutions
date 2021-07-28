#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, x;
  while ((scanf("%d", &n)) != EOF) {
    int m = 0;
    for (int i = 0; i < n; ++i) {
      cin >> x;
      m = max(m, x);
    }
    if (m < 10)
      cout << 1 << '\n';
    if (m < 20)
      cout << 2 << '\n';
    if (m >= 20)
      cout << 3 << '\n';
  }
  return 0;
}
