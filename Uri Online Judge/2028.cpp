#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, cnt = 1;
    while (cin >> x) {
      vector <int> v;
      v.push_back(0);
      for (int i = 0; i <= x; ++i)
        for (int j = 0; j < i; ++j)
          v.push_back(i);
      if (v.size() == 1)
        cout << "Caso " << cnt++ << ": " << 1 << " numero\n";
      else
        cout << "Caso " << cnt++ << ": " << v.size() << " numeros\n";
      cout << v[0];
      for (int i = 1; i < v.size(); ++i)
        cout << ' ' << v[i];
      cout << "\n\n";
    }
    return 0;
}
