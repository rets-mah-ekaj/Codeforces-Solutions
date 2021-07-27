#include<bits/stdc++.h>
using namespace std;

unsigned long long int fib(int n) {
  unsigned long long int a0 = 0, a1 = 1, next;
  if (n == 0)
    return a0;
  else if (n == 1)
    return a1;
  else {
    for (int i = 2; i <= n; ++i) {
      next = a0 + a1;
      a0 = a1;
      a1 = next;
    }
    return a1;
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
    cout << "Fib(" << n << ") = " << fib(n) << '\n';
  }
  return 0;
}
