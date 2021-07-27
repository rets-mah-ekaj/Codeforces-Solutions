#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <float> v(100);
  for (int i = 0; i < 100; ++i)
    cin >> v[i];
  cout << fixed << setprecision(1);
  for (int i = 0; i < 100; ++i)
    if (v[i] <= 10)
      cout << "A[" << i << "] = " << v[i] << '\n';
  return 0;
}
