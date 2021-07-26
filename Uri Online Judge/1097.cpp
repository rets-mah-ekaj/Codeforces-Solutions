#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int i = 1, j = 7, k = 1;
  while (i <= 9) {
    cout << "I=" << i << " J=" << j << '\n';
    if (k == 3) {
      k = 1;
      j += 4;
      i += 2;
    }
    else {
      ++k;
      --j;
    }
  }
  return 0;
}
