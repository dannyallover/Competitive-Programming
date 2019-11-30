#include <stdio.h>
#include <cstdlib>
#include <utility>
#include <climits>

void formUnit(int n, int heights[]) {
  int min = std::abs(heights[n-1]-heights[0]);
  std::pair <int, int> unit(n, 1);
  int i = 1;
  while(i < n) {
    int difference = std::abs(heights[i-1]-heights[i]);
    if(difference < min) {
      unit.first = i;
      unit.second = i+1;
      min = difference;
    }
    i++;
  }
  printf("%d %d", unit.first, unit.second);
}

int main(void) {
  int n;
  scanf("%d", &n);
  int heights[n];
  int i = 0;
  while(i < n) {
    scanf("%d", &heights[i]);
    i++;
  }

  formUnit(n, heights);
  return 0;
}
