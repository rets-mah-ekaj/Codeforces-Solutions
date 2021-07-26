#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, x, y;
  cin >> n;
  while (n--) {
    int total = 0;
    cin >> x >> y;
    if (x > y)
      swap (x, y);
    if (x % 2 == 0)
      ++x;
    else
      x += 2;
    for (int i = x; i < y; i += 2)
      total += i;
    cout << total << '\n';
  }
  return 0;
}
