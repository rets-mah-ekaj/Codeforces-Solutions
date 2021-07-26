#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, a1 = 0, a2 = 1, next;
  cin >> n;
  if (n == 1)
    cout << a1 << '\n';
  else if (n == 2)
    cout << a1 << ' ' << a2 << '\n';
  else {
    cout << a1 << ' ' << a2 << ' ';
    for (int i = 2; i < n; ++i) {
      next = a1 + a2;
      a1 = a2;
      a2 = next;
      if (i == n - 1)
        cout << next << '\n';
      else
        cout << next << ' ';
    }
  }
  return 0;
}
