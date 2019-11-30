#include <stdio.h>

bool canReachGrasshopper(int length, int jump, char s[]) {
  int i = 0;
  while(s[i] == '#' || s[i] == '.') {
    i++;
  }
  while(i < length - jump) {
    i+=jump;
    if(s[i] == '#') return false;
    if(s[i] == '.') continue;
    return true;
  }
  return false;
}
int main(void) {
  int length, jump;
  scanf("%d %d", &length, &jump);

  char s[length];
  scanf(" %s", s);

  if(canReachGrasshopper(length, jump, s)) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}
