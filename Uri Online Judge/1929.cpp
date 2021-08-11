#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector <int> v(4);
    for (auto &i : v)
      cin >> i;
    sort(v.begin(), v.end());
    if ((v[0] + v[1] > v[2] && v[0] + v[2] > v[1] && v[1] + v[2] > v[0]) || (v[1] + v[2] > v[3] && v[1] + v[3] > v[2] && v[2] + v[3] > v[1]))
      cout << "S\n";
    else
      cout << "N\n";
    return 0;
}
