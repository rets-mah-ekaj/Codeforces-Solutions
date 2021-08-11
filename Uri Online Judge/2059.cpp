#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p, j1, j2, r, a, sum = 0;
    cin >> p >> j1 >> j2 >> r >> a;
    sum = j1 + j2;
    if (p == 1)
      p = 0;
    else
      p = 1;
    if ((p != sum % 2 && (r == a)) || (p == sum % 2 && (r == 1 && r == a)))
      cout << "Jogador 2 ganha!\n";
    else
      cout << "Jogador 1 ganha!\n";
    return 0;
}
