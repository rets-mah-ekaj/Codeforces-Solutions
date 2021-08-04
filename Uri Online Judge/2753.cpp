#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 97;
  char ch = 'a';
  for (int i = 0; i < 26; ++i)
    cout << n++ << " e " << ch++ << '\n';
  return 0;
}
