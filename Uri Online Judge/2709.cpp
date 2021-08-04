#include<bits/stdc++.h>
using namespace std;

string prime(int x) {
  bool flag = true;
  if (x > 1) {
    for (int i = 2; i < x; ++i) {
      if (x % i == 0) {
        flag = false;
        break;
      }
    }
  }
  if (flag == false || x == 1)
    return "Bad boy! I'll hit you.\n";
  return "You're a coastal aircraft, Robbie, a large silver aircraft.\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int m, n;
  while (scanf("%d", &m) != EOF) {
    vector <int> v(m);
    int sum = 0;
    for (auto &i : v)
      cin >> i;
    reverse(v.begin(), v.end());
    cin >> n;
    for (int i = 0; i < m; i += n)
      sum += v[i];
    cout << prime(sum);
  }
  return 0;
}
