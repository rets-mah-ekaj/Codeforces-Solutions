#include<bits/stdc++.h>
using namespace std;

bool prime(int x) {
  if (x == 0 || x == 1)
    return false;
  else {
    for (int i = 2; i <= pow(x, 0.5); ++i)
      if (x % i == 0)
        return false;
    return true;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (prime(n) == true)
      cout << n << " eh primo\n";
    else
      cout << n << " nao eh primo\n";
  }
  return 0;
}
