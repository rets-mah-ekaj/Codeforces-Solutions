#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 39; ++i)
    cout << '-';
  cout << '\n';

  for (int j = 0; j < 5; ++j) {
    cout << '|';
    for (int i = 0; i < 37; ++i)
      cout << ' ';
    cout << "|\n";
  }

  for (int i = 0; i < 39; ++i)
    cout << '-';
  cout << '\n';
  return 0;
}
