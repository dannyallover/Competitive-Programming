#include <stdio.h>
#include <climits>

int playGame2(int n, int x, int y, int doors[]) {
  int numZeroDoors = 0;
  if(x > y) return n;
  for(int i = 0; i < n; i++) {
    if(doors[i] - x <= 0) numZeroDoors++;
  }
  if(numZeroDoors % 2 == 0) {
    return numZeroDoors / 2;
  } else {
    return (numZeroDoors+1)/2;
  }
}
// what's the complexity of this solution?
int playGame(int n, int x, int y, int doors[]) {
  if(x > y) return n;
  int min = INT_MAX, min2 = INT_MAX;
  int minPos = -1, secondMinPos = -1;
  int zeroDoors = 0;
  for(int i = 0; i < n; i++) {
    if(doors[i] == 0) {
      zeroDoors++;
      continue;
    }
    if(doors[i] < min) {
      min = doors[i];
      minPos = i;
    }
    if(doors[i] < min2 && doors[i] >= min && i != minPos) {
      secondMinPos = i;
      min2 = doors[i];
    }
  }
  if(secondMinPos == -1) secondMinPos = minPos;
  if(doors[minPos] - x <= 0) {
    doors[minPos] = 0;
    doors[secondMinPos]+=y;
    return playGame(n, x, y, doors);
  }

  return zeroDoors;
}
int main(void) {
  int n, x, y;
  scanf("%d %d %d", &n, &x, &y);
  int doors[n];
  for(int i = 0; i < n && scanf("%d", &doors[i]); i++);

  printf("%d", playGame2(n, x, y, doors));
  return 0;
}
