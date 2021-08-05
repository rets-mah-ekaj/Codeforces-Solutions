#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  string s;
  cin >> t;
  while (t--) {
    cin >> s >> n;
    if (s == "Thor")
      cout << "Y\n";
    else
      cout << "N\n";
  }
  return 0;
}
