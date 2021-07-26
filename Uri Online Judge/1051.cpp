#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double sal, ir;
  cin >> sal;
  cout << fixed << setprecision(2);

  if (sal >= 0 && sal <= 2000)
    cout << "Isento\n";
  if (sal > 2000 && sal <= 3000) {
    sal -= 2000;
    cout << "R$ " << sal * 0.08 << '\n';
  }
  else if(sal > 3000 && sal <= 4500) {
    sal -= 3000;
    cout << "R$ " << 1000 * 0.08 + sal * 0.18 << '\n';
  }
  if (sal > 4500) {
    sal -= 4500;
    cout << "R$ " << 1000 * 0.08 + 1500 * 0.18 + sal * 0.28 << '\n';
  }
  return 0;
}
