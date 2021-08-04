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

  int n, q;
  cin >> n >> q;
  vector <int> list(n);
  for (auto &i : list)
    cin >> i;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int a, b, v;
      cin >> a >> b >> v;
      for (int i = a - 1; i < b; ++i)
        list[i] += v;
    }
    else if (t == 2) {
      int a, b, g;
      cin >> a >> b;
      g = list[a - 1];
      for (int i = a; i < b; ++i)
        g = gcd(g, list[i]);
      cout << g << '\n';
    }
  }
  return 0;
}
