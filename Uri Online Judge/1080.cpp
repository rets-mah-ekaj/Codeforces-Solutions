#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  double c = 0, r = 0, s = 0, x, avg = 0;
  char ch;
  for (int i = 0; i < n; ++i) {
    cin >> x >> ch;
    if (ch == 'C')
      c += x;
    else if (ch == 'R')
      r += x;
    else if (ch == 'S')
      s += x;
  }
  cout << "Total: " << (int)(c + r + s) << " cobaias\n";
  cout << "Total de coelhos: " << (int)(c) << '\n';
  cout << "Total de ratos: " << (int)(r) << '\n';
  cout << "Total de sapos: " << (int)(s) << '\n';
  cout << fixed << setprecision(2);
  cout << "Percentual de coelhos: " << (c * 100) / (c + r + s) << " %\n";
  cout << "Percentual de ratos: " << (r * 100) / (c + r + s) << " %\n";
  cout << "Percentual de sapos: " << (s * 100) / (c + r + s) << " %\n";
  return 0;
}
