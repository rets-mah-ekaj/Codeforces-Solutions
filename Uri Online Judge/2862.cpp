#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n > 8000)
      cout << "Mais de 8000!\n";
    else
      cout << "Inseto!\n";
  }
  return 0;
}
