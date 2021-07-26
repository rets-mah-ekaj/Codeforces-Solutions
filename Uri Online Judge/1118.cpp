#include<bits/stdc++.h>
using namespace std;

void calc() {
  float n, total = 0, c = 0;
  while (true) {
    if (c == 2) {
      cout << fixed << setprecision(2) << "media = " << total / 2 << '\n';
      break;
    }
    cin >> n;
    if (n >= 0 && n <= 10) {
      total += n;
      ++c;
    }
    else
      cout << "nota invalida\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x = 1;
  while (true) {
    if (x == 1)
      calc();
    cout << "novo calculo (1-sim 2-nao)\n";
    cin >> x;
    if (x == 2)
      break;
  }
  return 0;
}
