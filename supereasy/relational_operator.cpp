#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int t, a, b;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &a, &b);
    if (a < b) {
      printf("%c\n", '<');
    } else if (a > b) {
      printf("%c\n", '>');
    } else
      printf("%c\n", '=');
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
