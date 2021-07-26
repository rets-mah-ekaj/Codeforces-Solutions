#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, y, count = 0;
  cin >> x >> y;
  for (int i = 1; i <= y; ++i) {
    ++count;
    if (count == x) {
      cout << i << '\n';
      count = 0;
    }
    else
      cout << i << ' ';
  }
  return 0;
}
