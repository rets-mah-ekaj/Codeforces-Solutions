#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long double n;
    char c[111];
    cin >> n;
    sprintf(c, "%LE", n);
    if (c[0] != '-')
      cout << '+';
    printf("%.4LE\n", n);
    return 0;
}
