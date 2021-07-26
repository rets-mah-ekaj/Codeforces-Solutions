#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int e = 0, x;
  for (int i = 0; i < 5; ++i) {
    cin >> x;
    if (x % 2 == 0)
      ++e;
  }
  cout << e << " valores pares\n";
  return 0;
}
