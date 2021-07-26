#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int n;
  cin >> n;
  for (int i = 2; i <= n; i += 2)
    cout << i << '^' << 2 << " = " << i * i << '\n';
  return 0;
}
