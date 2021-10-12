
#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int a, b, c, d;
  while (scanf("%d %d %d %d", &a, &b, &c, &d) && a | b | c | d) {
    int res = 0;
    res += 80;
    res += (a - b < 0 ? 40 + (a - b) : (a - b));
    res += 40;
    res += (c - b < 0 ? 40 + (c - b) : (c - b));
    res += (c - d < 0 ? 40 + (c - d) : (c - d));
    res *= 9;
    printf("%d\n", res);
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
