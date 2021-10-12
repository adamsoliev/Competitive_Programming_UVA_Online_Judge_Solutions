#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int t, k, total = 0;
  char s[20];
  scanf("%d", &t);
  while (t--) {
    scanf("%s %d", s, &k);
    if (strcmp(s, "donate") == 0) {
      total += k;
    } else {
      printf("%d\n", total);
    }
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
