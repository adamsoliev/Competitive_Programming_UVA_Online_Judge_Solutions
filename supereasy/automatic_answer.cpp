#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    n = (((((n * 567) / 9) + 7492) * 235) / 47) - 498;
    n = abs((n / 10) % 10);
    printf("%d\n", n);
  }

  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
