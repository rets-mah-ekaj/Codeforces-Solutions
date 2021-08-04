#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector <int> v(n);
  for (auto &i : v)
    cin >> i;
  int two = 0, three = 0, four = 0, five = 0;
  for (int i = 0; i < n; ++i) {
    if (v[i] % 2 == 0)
      ++two;
    if (v[i] % 3 == 0)
      ++three;
    if (v[i] % 4 == 0)
      ++four;
    if (v[i] % 5 == 0)
      ++five;
  }
  cout << two << " Multiplo(s) de 2\n";
  cout << three << " Multiplo(s) de 3\n";
  cout << four << " Multiplo(s) de 4\n";
  cout << five << " Multiplo(s) de 5\n";
  return 0;
}
