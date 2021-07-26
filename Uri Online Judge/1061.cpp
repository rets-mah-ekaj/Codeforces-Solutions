#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int h, hh, hr, m, mm, mr, d, dr, dm, s, sr, ss;
  scanf("Dia %d", &d);
  scanf("%d : %d : %d\n", &h, &m, &s);
  scanf("Dia %d", &dm);
  scanf("%d : %d : %d", &hh, &mm, &ss);

  s = ss - s;
  m = mm - m;
  h = hh - h;
  d = dm - d;

  if (s < 0) {
    s += 60;
    --m;
  }
  if (m < 0) {
    m += 60;
    --h;
  }
  if (h < 0) {
    h += 24;
    --d;
  }
  cout << d << " dia(s)\n";
  cout << h << " hora(s)\n";
  cout << m << " minuto(s)\n";
  cout << s << " segundo(s)\n";
  return 0;
}
