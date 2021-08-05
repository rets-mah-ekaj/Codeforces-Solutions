#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, I, i, j;
  while (cin >> N >> I) {
    int total = 0;
    while (N--) {
      cin >> i >> j;
      if (i == I && j == 0)
        ++total;
    }
    cout << total << '\n';
  }
  return 0;
}
