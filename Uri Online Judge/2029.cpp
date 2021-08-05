#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double v, d, pi = 3.14;
  while (scanf("%lf %lf", &v, &d) != EOF) {
    d /= 2.00;
    cout << fixed << setprecision(2);
    cout << "ALTURA = " << v / (pi * d * d) << '\n';
    cout << "AREA = " << (pi * d * d) << '\n';
  }
  return 0;
}
