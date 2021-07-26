#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x;
  while (true) {
    cin >> x;
    if (x == 0)
      break;
    for (int i = 1; i <= x - 1; ++i)
      cout << i << ' ';
    cout << x << '\n';
  }
  return 0;
}
