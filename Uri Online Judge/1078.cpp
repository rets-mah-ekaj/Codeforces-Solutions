#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = 1; i <= 10; ++i)
    cout << i << " x " << n << " = " << i * n << '\n';
  return 0;
}
