#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int hi, hf, mi, mf;
  cin >> hi >> mi >> hf >> mf;
  int m = (hf * 60 + mf) - (hi * 60 + mi);
  if (m <= 0)
    m += 1440;
  int h = m / 60;
  m %= 60;
  cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)\n";
  return 0;
}
