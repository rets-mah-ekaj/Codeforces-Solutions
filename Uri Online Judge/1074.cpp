#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, x;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    if (x == 0)
      cout << "NULL\n";
    else if (x < 0) {
      if (x % 2 == 0)
        cout << "EVEN NEGATIVE\n";
      else
        cout << "ODD NEGATIVE\n";
    }
    else {
      if (x % 2 == 0)
        cout << "EVEN POSITIVE\n";
      else
        cout << "ODD POSITIVE\n";
    }
  }
  return 0;
}
