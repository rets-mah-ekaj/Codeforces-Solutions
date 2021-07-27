#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double x;
  cin >> x;
  vector <double> v(100);
  v[0] = x;
  for (int i = 1; i < 100; ++i) {
    v[i] = x / 2.0;
    x /= 2.0;
  }
  cout << fixed << setprecision(4);
  for (int i = 0; i < 100; ++i)
    cout << "N[" << i << "] = " << v[i] << '\n';
  return 0;
}
