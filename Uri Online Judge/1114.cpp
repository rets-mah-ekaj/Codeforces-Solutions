#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x;
  while (true) {
    cin >> x;
    if (x == 2002) {
      cout << "Acesso Permitido\n";
      break;
    }
    else
      cout << "Senha Invalida\n";
  }
  return 0;
}
