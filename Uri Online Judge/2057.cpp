#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s, t, f;
    cin >> s >> t >> f;
    if (((s + t) % 24) + f < 0)
      cout << 24 + (((s + t) % 24) + f) << '\n';
    else
      cout << ((s + t) % 24) + f << '\n';
    return 0;
}
