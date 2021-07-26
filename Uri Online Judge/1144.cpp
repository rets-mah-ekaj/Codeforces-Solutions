#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cout << i << ' ' << i * i << ' ' << i * i * i << '\n';
    cout << i << ' ' << i * i + 1 << ' ' << i * i * i + 1 << '\n';
  }
  return 0;
}
