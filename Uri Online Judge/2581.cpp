#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  string s;
  cin >> t;
  for (int i = 0; i < t + 1; ++i) {
    getline(cin, s);
    if (i != 0)
      cout << "I am Toorg!\n";
  }
  return 0;
}
