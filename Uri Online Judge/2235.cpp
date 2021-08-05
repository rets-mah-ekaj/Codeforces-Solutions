#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, y, z;
  cin >> x >> y >> z;
  if (x == y || y == z || x == z)
    cout << "S\n";
  else if (x + y == z || x + z == y || y + z == x)
    cout << "S\n";
  else
    cout << "N\n";
  return 0;
}
