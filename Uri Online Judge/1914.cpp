#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t, x, y;
    string sa, a, sb, b;
    cin >> t;
    while (t--) {
      cin >> sa >> a >> sb >> b >> x >> y;
      x += y;
      if (x % 2 == 0) {
        if (a == "PAR")
          cout << sa << '\n';
        else
          cout << sb << '\n';
      }
      else {
        if (a == "PAR")
          cout << sb << '\n';
        else
          cout << sa << '\n';
      }
    }
    return 0;
}
