#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 39; ++i)
    cout << '-';
  cout << '\n';

  cout << "|x = 35";
  for (int i = 0; i < 31; ++i)
    cout << ' ';
  cout << "|\n";

  cout << '|';
  for (int i = 0; i < 37; ++i)
    cout << ' ';
  cout << "|\n";

  cout << '|';
  for (int i = 0; i < 15; ++i)
    cout << ' ';
  cout << "x = 35";
  for (int i = 0; i < 16; ++i)
    cout << ' ';
  cout << "|\n";

  cout << '|';
  for (int i = 0; i < 37; ++i)
    cout << ' ';
  cout << "|\n";

  cout << '|';
  for (int i = 0; i < 31; ++i)
    cout << ' ';
  cout << "x = 35|\n";

  for (int i = 0; i < 39; ++i)
    cout << '-';
  cout << '\n';
  return 0;
}
