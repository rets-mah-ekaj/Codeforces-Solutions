#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  while (true) {
    cin >> n;
    if (n == 0)
      break;
    else {
      if (n % 2 != 0)
        ++n;
      int total = 0;
      for (int i = 0; i < 5; ++i) {
        total += n;
        n += 2;
      }
      cout << total << '\n';
    }
  }
  return 0;
}
