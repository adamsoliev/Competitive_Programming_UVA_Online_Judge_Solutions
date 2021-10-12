#include <bits/stdc++.h>
using namespace std;

int main() {
  //
  int t, give, take, n;
  int cnt = 1;
  while (true) {
    scanf("%d", &t);
    if (t == 0)
      return 0;
    printf("Case %d: ", cnt++);
    give = 0, take = 0;
    while (t--) {
      scanf("%d", &n);
      if (n == 0)
        ++take;
      else
        ++give;
    }
    printf("%d\n", give - take);
  }
  return 0;
}

// Author: Adam Soliev
// Date: 10-12-21
