#include<bits/stdc++.h>
using namespace std;

bool overlap(int radius, int xc, int yc, int x1, int y1, int x2, int y2) {
  int xn = max(x1, min(xc, x2));
  int yn = max(y1, min(yc, y2));
  int dx = xn - xc;
  int dy = yn - yc;
  return (dx * dx + dy * dy) <= radius * radius;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int w, h, x1, y1, x2, y2, radius, xc, yc, level;
    cin >> w >> h >> x1 >> y1;
    x2 = x1 + w;
    y1 = y2 + h;
    string element;
    cin >> element >> level >> xc >> yc;
    bool val;
    if (element == "fire") {
      switch (level) {
        case 1: val = overlap(20, xc, yc, x1, y1, x2, y2); break;
        case 2: val = overlap(30, xc, yc, x1, y1, x2, y2); break;
        case 3: val = overlap(50, xc, yc, x1, y1, x2, y2); break;
      }
      if (val == true)
        cout << 200 << '\n';
      else
        cout << 0 << '\n';
    }
    else if (element == "water") {
      switch (level) {
        case 1: val = overlap(10, xc, yc, x1, y1, x2, y2); break;
        case 2: val = overlap(25, xc, yc, x1, y1, x2, y2); break;
        case 3: val = overlap(40, xc, yc, x1, y1, x2, y2); break;
      }
      if (val == true)
        cout << 300 << '\n';
      else
        cout << 0 << '\n';
    }
    else if (element == "earth") {
      switch (level) {
        case 1: val = overlap(25, xc, yc, x1, y1, x2, y2); break;
        case 2: val = overlap(55, xc, yc, x1, y1, x2, y2); break;
        case 3: val = overlap(70, xc, yc, x1, y1, x2, y2); break;
      }
      if (val == true)
        cout << 400 << '\n';
      else
        cout << 0 << '\n';
    }
    else if (element == "air") {
      switch (level) {
        case 1: val = overlap(18, xc, yc, x1, y1, x2, y2); break;
        case 2: val = overlap(38, xc, yc, x1, y1, x2, y2); break;
        case 3: val = overlap(60, xc, yc, x1, y1, x2, y2); break;
      }
      if (val == true)
        cout << 100 << '\n';
      else
        cout << 0 << '\n';
    }
  }
  return 0;
}
