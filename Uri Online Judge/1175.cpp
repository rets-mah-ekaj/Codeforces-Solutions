#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <int> v(20);
  for (auto &i : v)
    cin >> i;
  reverse(v.begin(), v.end());
  for (int i = 0; i < 20; ++i)
    cout << "N[" << i << "] = " << v[i] << '\n';
  return 0;
}
