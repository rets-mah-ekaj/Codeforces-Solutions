#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int x, m;
  while (true) {
    cin >> x >> m;
    if (x == 0 && m == 0)
      break;
    cout << x * m << '\n';
  }
  return 0;
}
