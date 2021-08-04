#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, count = 0, x;
  cin >> n;
  while (n--) {
    cin >> x;
    if (x != 1)
      ++count;
  }
  cout << count << '\n';
  return 0;
}
