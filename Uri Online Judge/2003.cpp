#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, m;
    while ((scanf("%d:%d", &h, &m)) != EOF) {
      if (h < 7)
        cout << "Atraso maximo: 0\n";
      else if (h == 7)
        cout << "Atraso maximo: " << m << '\n';
      else
        cout << "Atraso maximo: " << (h - 7) * 60 + m << '\n';
    }
    return 0;
}
