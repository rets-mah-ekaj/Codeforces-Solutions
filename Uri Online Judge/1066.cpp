#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int e = 0, o = 0, p = 0, n = 0, x;
  for (int i = 0; i < 5; ++i) {
    cin >> x;
    if (x % 2 == 0)
      ++e;
    else
      ++o;
    if (x < 0)
      ++n;
    else if (x > 0)
      ++p;
  }
  cout << e << " valor(es) par(es)\n";
  cout << o << " valor(es) impar(es)\n";
  cout << p << " valor(es) positivo(s)\n";
  cout << n << " valor(es) negativo(s)\n";
  return 0;
}
