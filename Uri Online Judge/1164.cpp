#include<bits/stdc++.h>
using namespace std;

bool perfect(int x) {
  vector <int> v;
  for (int i = 1; i < x; ++i)
    if (x % i == 0)
      v.push_back(i);
  int total = 0;
  for (int i = 0; i < v.size(); ++i)
    total += v[i];
  if (total == x)
    return true;
  return false;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (perfect(n) == true)
      cout << n << " eh perfeito\n";
    else
      cout << n << " nao eh perfeito\n";
  }
  return 0;
}
