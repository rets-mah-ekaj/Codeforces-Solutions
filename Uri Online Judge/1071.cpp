#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, y, total = 0;
  cin >> x >> y;
  if (x > y)
    swap(x, y);
  for (int i = x + 1; i < y; ++i)
    if (i % 2 != 0)
      total += i;
  cout << total << '\n';
  return 0;
}
