#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  float a, b, c;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a >> b >> c;
    a *= 2;
    b *= 3;
    c *= 5;
    cout << fixed << setprecision(1) << (a + b + c) / 10 << '\n';
  }
}
