#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, k;
  cin >> t;
  k = t;
  t = 0;
  vector <int> n(1000);
  for (int i = 0; i < 1000; ++i) {
    if (t == k)
      t = 0;
    n[i] = t++;
    cout << "N[" << i << "] = " << n[i] << '\n';
  }
  return 0;
}
