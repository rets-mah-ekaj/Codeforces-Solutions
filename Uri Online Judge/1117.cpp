#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  float x, total = 0, c = 0;
  while (true) {
    cin >> x;
    if (x >= 0 && x <= 10.0) {
      total += x;
      ++c;
      if (c == 2) {
        cout << fixed << setprecision(2) << "media = " << total / 2 << '\n';
        break;
      }
    }
    else
      cout << "nota invalida\n";
  }
  return 0;
}
