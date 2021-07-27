#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, low, low_index;
  cin >> n;
  vector <int> v(n);
  cin >> v[0];
  low = v[0];
  low_index = 0;
  for (int i = 1; i < n; ++i) {
    cin >> v[i];
    if (v[i] < low) {
      low = v[i];
      low_index = i;
    }
  }
  cout << "Menor valor: " << low << '\n';
  cout << "Posicao: " << low_index << '\n';
  return 0;
}
