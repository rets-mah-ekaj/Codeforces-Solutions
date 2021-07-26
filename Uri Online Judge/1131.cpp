#include<bits/stdc++.h>
using namespace std;



int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int i = 0, g = 0, e = 0, x, a, b, t = 0;
  while (true) {
    ++t;
    cin >> a >> b;
    if (a > b)
      ++i;
    else if (a == b)
      ++e;
    else
      ++g;
    cout << "Novo grenal (1-sim 2-nao)\n";
    cin >> x;
    if (x == 2)
      break;
  }
  cout << t << " grenais\n";
  cout << "Inter:" << i << '\n';
  cout << "Gremio:" << g << '\n';
  cout << "Empates:" << e << '\n';
  if (a > b)
    cout << "Inter venceu mais\n";
  else if (a < b)
    cout << "Gremio venceu mais\n";
  else
    cout << "Não houve vencedor\n";
  return 0;
}
