#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = 1; i <= n * 4; ++i) {
    if (i % 4 != 0)
      cout << i << ' ';
    else
      cout << "PUM\n";
  }
  return 0;
}
