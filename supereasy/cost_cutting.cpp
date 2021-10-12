#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int count = 1;
  int t, a, b, c;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d %d", &a, &b, &c);
    if ((a < b && b < c) || (c < b && b < a)) {
      printf("%s %d%c% d\n", "Case", count++, ':', b);
    } else if ((b < a && a < c) || (c < a && a < b)) {
      printf("%s %d%c% d\n", "Case", count++, ':', a);
    } else
      printf("%s %d%c% d\n", "Case", count++, ':', c);
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
