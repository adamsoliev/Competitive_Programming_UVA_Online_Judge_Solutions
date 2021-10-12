#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int t, l, w, h;
  int cnt = 1;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d %d", &l, &w, &h);
    if (l > 20 || w > 20 || h > 20) {
      printf("Case %d: bad\n", cnt++);
    } else {
      printf("Case %d: good\n", cnt++);
    }
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
