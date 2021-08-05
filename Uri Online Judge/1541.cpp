#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, c;
  while (cin >> a && a != 0) {
    cin >> b >> c;
    double x = sqrt((a * b * 100) / (double) c);
    cout << trunc(x) << '\n';
  }
  return 0;
}
