#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, y;
  while (true) {
    cin >> x >> y;
    if (x <= 0 || y <= 0)
      break;
    else {
      int total = 0;
      if (x > y)
        swap(x, y);
      for (int i = x; i <= y; ++i) {
        cout << i << ' ';
        total += i;
      }
      cout << "Sum=" << total << '\n';
    }
  }
  return 0;
}
