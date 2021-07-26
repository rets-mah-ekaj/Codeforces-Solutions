#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  while (n--) {
    float a, b;
    cin >> a >> b;
    if ((int)(a) == 0)
      cout << 0.0 << '\n';
    else if ((int)(b) == 0)
      cout << "divisao impossivel\n";
    else
      cout << fixed << setprecision(1) << a / b << '\n';
  }
  return 0;
}
