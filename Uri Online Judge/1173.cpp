#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <int> v(10);
  int n;
  cin >> n;
  for (int i = 0; i < 10; ++i) {
    if (i != 0)
      v[i] = v[i - 1] * 2;
    else
      v[i] = n;
  }
  for (int i = 0; i < 10; ++i)
    cout << "N[" << i << "] = " << v[i] << '\n';
  return 0;
}
