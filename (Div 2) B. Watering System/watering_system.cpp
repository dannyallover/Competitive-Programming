#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int minHolesCovered(int n, int a, int b) {
  vector<int> holes(n-1, 0);
  int firstHole;
  scanf("%d", &firstHole);
  double sumOfHoles = firstHole;
  for(int i = 0; i < n-1; i++) {
    scanf("%d", &holes[i]);
    sumOfHoles+=holes[i];
  }

  // no holes removed
  if(((firstHole * a) / sumOfHoles) >= b) return 0;

  // nlogn for sorting
  sort(holes.begin(), holes.end());

  int j = n-2;
  while(j >= 0 && ((double)(firstHole * a) / (double)sumOfHoles) < b) {
    sumOfHoles-=holes[j];
    j--;
  }
  return (n-2)-j;
}

int main (void) {
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);

  printf("%d", minHolesCovered(n, a, b));

  return 0;
}
