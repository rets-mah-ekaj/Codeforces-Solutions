#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, a, b, c, d, e, cnt = 0;
    cin >> t >> a >> b >> c >> d >> e;
    if (a == t)
      ++cnt;
    if (b == t)
      ++cnt;
    if (c == t)
      ++cnt;
    if (d == t)
      ++cnt;
    if (e == t)
      ++cnt;
    cout << cnt << '\n';
    return 0;
}
