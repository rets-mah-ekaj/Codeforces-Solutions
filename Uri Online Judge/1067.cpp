#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x;
  cin >> x;
  if (x % 2 == 0)
    --x;
  for (int i = 1; i <= x; i += 2)
    cout << i << '\n';
  return 0;
}
