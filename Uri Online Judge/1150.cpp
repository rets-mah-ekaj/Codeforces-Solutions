#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, y, count = 0, total = 0;
  cin >> x;
  while (true) {
    cin >> y;
    if (y > x)
      break;
  }
  for (int i = x; total < y; ++i, ++count)
    total += i;
  cout << count << '\n';
  return 0;
}
