#include <stdio.h>

bool helper(int x, int y) {
  if(x >= y) {
    return true;
  } else if(x == 3) {
    return false;
  } else if(x % 2 == 0) {
    return helper((x/2)*3, y);
  } else if(x > 1) {
    return helper(x - 1, y);
  }
  return false;
}

void canGetY(int n) {
  int x, y;
  while(n > 0) {
    scanf(" %d %d", &x, &y);
    if(helper(x, y)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
    n--;
  }
}

int main (void) {
  int n;
  scanf("%d", &n);
  canGetY(n);
  return 0;
}
