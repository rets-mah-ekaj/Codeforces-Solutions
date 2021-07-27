#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long t, pop_a, pop_b;
  double grow_a, grow_b;
  cin >> t;
  while (t--) {
    int a = 0, s = 0;
    cin >> pop_a >> pop_b >> grow_a >> grow_b;
    while (pop_a <= pop_b) {
      pop_a += pop_a * grow_a / 100;
      pop_b += pop_b * grow_b / 100;
      ++a;
      if (a > 100) {
        s = 1;
        break;
      }
    }
    if (s == 0)
      cout << a << " anos.\n";
    else
      cout << "Mais de 1 seculo.\n";
  }
  return 0;
}
