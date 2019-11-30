#include <stdio.h>

int subtract(int n, int k) {
  while(k > 0) {
    if(n % 10 == 0) {
      n=n/10;
    } else {
      n--;
    }
    k--;
  }

  return n;
}
int main() {
  int n = 0, k = 0;
  scanf("%d %d", &n, &k);

  printf("%d", subtract(n, k));

  return 0;
}
