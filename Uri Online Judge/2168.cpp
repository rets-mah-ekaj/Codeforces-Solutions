#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector <vector <int> > v;
  for (int i = 0; i < n + 1; ++i) {
    vector <int> temp(n + 1);
    for (auto &j : temp)
      cin >> j;
    v.push_back(temp);
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int c = 0;
      if (v[i][j] == 1)
        ++c;
      if (v[i + 1][j] == 1)
        ++c;
      if (v[i][j + 1] == 1)
        ++c;
      if (v[i + 1][j + 1] == 1)
        ++c;
      if (c >= 2)
        cout << 'S';
      else
        cout << 'U';
    }
    cout << '\n';
  }
  return 0;
}
