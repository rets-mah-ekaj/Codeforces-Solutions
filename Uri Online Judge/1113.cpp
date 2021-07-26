#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, y;
  while (true) {
    cin >> x >> y;
    if (x == y)
      break;
    if (x > y)
      cout << "Decrescente\n";
    else
      cout << "Crescente\n";
  }
  return 0;
}
