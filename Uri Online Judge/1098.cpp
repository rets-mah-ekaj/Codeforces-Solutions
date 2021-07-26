#include<bits/stdc++.h>
using namespace std;



int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  float i = 0, j = 1, k = 0;
  while (true) {
    if (i == 0 || i == 1 || i == 2) {
      cout << "I=" << (int)(i) << " J=" << j + k << '\n';
      cout << "I=" << (int)(i) << " J=" << ++j + k << '\n';
      cout << "I=" << (int)(i) << " J=" << ++j + k << '\n';
    }
    else {
      cout << "I=" << i << " J=" << j + k << '\n';
      cout << "I=" << i << " J=" << ++j + k << '\n';
      cout << "I=" << i << " J=" << ++j + k << '\n';
    }
    i += 0.2;
    k += 0.2;
    j -= 2;
    if (i > 2.2)
      break;
  }
  return 0;
}
