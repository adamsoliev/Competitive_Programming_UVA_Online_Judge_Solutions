#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  char s[20];
  int cnt = 1;
  while (true) {
    scanf("%s", s);
    if (strcmp(s, "Hajj") == 0) {
      printf("Case %d: Hajj-e-Akbar\n", cnt++);
    } else if (strcmp(s, "Umrah") == 0) {
      printf("Case %d: Hajj-e-Asghar\n", cnt++);
    } else {
      return 0;
    }
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
