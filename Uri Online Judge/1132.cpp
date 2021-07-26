#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, total = 0;
  cin >> a >> b;
  if (a > b)
    swap(a, b);
  for (int i = a; i <= b; ++i)
    if (i % 13 != 0)
      total += i;
  cout << total << '\n';
  return 0;
}
