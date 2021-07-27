#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <int> par(5), impar(5);
  int temp, j, p = 0, imp = 0;
  for (int i = 0; i < 15; ++i) {
    cin >> temp;
    if (temp % 2 == 0)
      par[p++] = temp;
    else
      impar[imp++] = temp;
    if (p == 5) {
      j = 0;
      while (j != 5)
        cout << "par[" << j << "] = " << par[j++] << '\n';
      p = 0;
    }
    if (imp == 5) {
      j = 0;
      while (j != 5)
        cout << "impar[" << j << "] = " << impar[j++] << '\n';
      imp = 0;
    }
    if (i == 14) {
      j = 0;
      while (j < imp)
        cout << "impar[" << j << "] = " << impar[j++] << '\n';
      j = 0;
      while (j < p)
        cout << "par[" << j << "] = " << par[j++] << '\n';
    }
  }
  return 0;
}
