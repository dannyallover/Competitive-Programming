#include <stdio.h>

int applyOperations(int n, int sum) {
  char c1 = 'a';
  char c2 = 'b';
  char c3 = 'c';
  while(n > 0) {
    scanf(" %c%c%c", &c1, &c2, &c3);
    sum = (c2 == '+') ? sum + 1 : sum - 1;
    n--;
  }
  return sum;
}
int main(void) {
  int n;
  scanf("%d", &n);

  printf("%d", applyOperations(n , 0));

  return 0;
}
