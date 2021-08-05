#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, k;
  cin >> t;
  while (t--) {
    cin >> k;
    int total = 0, x;
    for (int i = 0; i < k - 1; ++i) {
      cin >> x;
      total += x - 1;
    }
    cin >> x;
    total += x;
    cout << total << '\n';
  }
  return 0;
}
