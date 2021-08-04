#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double x = 234.345, y = 45.698;
  cout << fixed << setprecision(6) << x << " - " << y << '\n';
  cout << fixed << setprecision(0) << x << " - " << y << '\n';
  cout << fixed << setprecision(1) << x << " - " << y << '\n';
  cout << fixed << setprecision(2) << x << " - " << y << '\n';
  cout << fixed << setprecision(3) << x << " - " << y << '\n';
  printf("%e - %e\n", x, y);
  printf("%E - %E\n", x, y);
  printf("%.3lf - %.3lf\n", x, y);
  printf("%.3lf - %.3lf\n", x, y);
  return 0;
}
