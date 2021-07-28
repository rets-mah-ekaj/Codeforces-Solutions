#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    if (i != n - 1)
      cout << "Ho ";
    else
      cout << "Ho!\n";
  }
  return 0;
}
