#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int t, a, b, minD = INT_MAX, maxD = INT_MIN;
  scanf("%d", &t);
  while (t--) {
    minD = INT_MAX, maxD = INT_MIN;
    scanf("%d", &a);
    for (int i = 0; i < a; ++i) {
      scanf("%d", &b);
      minD = min(minD, b);
      maxD = max(maxD, b);
    }
    printf("%d\n", 2 * (maxD - minD));
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
