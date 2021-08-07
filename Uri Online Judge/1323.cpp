#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  while (true) {
    cin >> n;
    if (n == 0)
      break;
    cout << n * (n + 1) * (3 * n - n + 1) / 6 << '\n';
  }
  return 0;
}
