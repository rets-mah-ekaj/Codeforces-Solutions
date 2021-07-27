#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  float x, total = 0, c = 0;
  while (true) {
    cin >> x;
    if (x < 0)
      break;
    total += x;
    ++c;
  }
  cout << fixed << setprecision(2);
  cout << (double)(total / c) << '\n';
  return 0;
}
