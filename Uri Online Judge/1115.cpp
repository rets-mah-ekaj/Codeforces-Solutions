#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, y;
  while (true) {
    cin >> x >> y;
    if (x == 0 || y == 0)
      break;
    else {
      if (x > 0 && y > 0)
        cout << "primeiro\n";
      else if (x < 0 && y > 0)
        cout << "segundo\n";
      else if (x < 0 && y < 0)
        cout << "terceiro\n";
      else
        cout << "quarto\n";
    }
  }
  return 0;
}
