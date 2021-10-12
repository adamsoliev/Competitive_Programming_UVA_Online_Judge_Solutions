
#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int t, n, m, sonars;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &n, &m);
    sonars = (n / 3) * (m / 3);

    printf("%d\n", sonars);
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
