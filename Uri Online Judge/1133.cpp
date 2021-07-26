#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;
  cin >> a >> b;
  if (a > b)
    swap(a, b);
  for (int i = a + 1; i < b; ++i) {
    if (i % 5 == 2 || i % 5 == 3)
      cout << i << '\n';
  }
  return 0;
}
