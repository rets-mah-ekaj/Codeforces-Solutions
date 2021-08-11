#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string a, b;
    cin >> t;
    while (t--) {
      cin >> a >> b;
      if (a == "papel") {
        if (b == "ataque")
          cout << "Jogador 2 venceu\n";
        else if (b == "pedra")
          cout << "Jogador 2 venceu\n";
        else
          cout << "Ambos venceram\n";
      }
      else if (a == "pedra") {
        if (b == "papel")
          cout << "Jogador 1 venceu\n";
        else if (b == "ataque")
          cout << "Jogador 2 venceu\n";
        else
          cout << "Sem ganhador\n";
      }
      else if (a == "ataque") {
        if (b == "ataque")
          cout << "Aniquilacao mutua\n";
        else
          cout << "Jogador 1 venceu\n";
      }
    }
    return 0;
}
