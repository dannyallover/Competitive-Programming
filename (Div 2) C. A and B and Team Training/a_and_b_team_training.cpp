#include <stdio.h>

int numTeams(int n, int m) {
  if(n == 0 || m == 0) {
    return 0;
  } else if(n < 2 && m < 2) {
    return 0;
  } else if(n > m) {
    return numTeams(n - 2, m - 1) + 1;
  } else {
    return numTeams(n - 1, m - 2) + 1;
  }
}
int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  printf("%d", numTeams(n, m));
  return 0;
}
