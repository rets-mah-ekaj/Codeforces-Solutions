#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  if (n == 1)
    cout << "1\n";
  else if (n == 2)
    cout << "1 1\n";
  else {
    vector <int> v;
    v.push_back(1);
    v.push_back(1);
    for (int i = 0; i < n - 2; ++i)
      v.push_back(v[i] + v[i + 1]);
    reverse(v.begin(), v.end());
    for (int i = 0; i < n - 1; ++i)
      cout << v[i] << ' ';
    cout << v[n - 1] << '\n';
  }
  return 0;
}
