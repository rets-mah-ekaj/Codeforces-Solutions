#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, a = 0, g = 0, d = 0;
  while (true) {
    cin >> x;
    if (x == 4)
      break;
    else if (x == 1)
      ++a;
    else if (x == 2)
      ++g;
    else if (x == 3)
      ++d;
  }
  cout << "MUITO OBRIGADO\n";
  cout << "Alcool: " << a << '\n';
  cout << "Gasolina: " << g << '\n';
  cout << "Diesel: " << d << '\n';
  return 0;
}
