#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int k, n, m, x, y;
  bool run = true;
  while (run) {
    scanf("%d", &k);
    if (k == 0)
      break;
    scanf("%d %d", &n, &m);
    while (k--) {
      scanf("%d %d", &x, &y);
      if (x == n || y == m) {
        printf("%s\n", "divisa");
      } else if (x > n && y > m) {
        printf("%s\n", "NE");
      } else if (x < n && y < m) {
        printf("%s\n", "SO");
      } else if (x < n && y > m) {
        printf("%s\n", "NO");
      } else
        printf("%s\n", "SE");
    }
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
