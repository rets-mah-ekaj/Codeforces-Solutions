#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, a, b;
  cin >> n >> a >> b;
  cout << ((a + b <= n) ? "Farei hoje!" : "Deixa para amanha!") << '\n';
  return 0;
}
