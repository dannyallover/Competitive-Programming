#include <stdio.h>
#include <map>
using namespace std;

int getNumPairs(int sizes[], int n) {
  map<int, int> pairs;
  int num = 0;
  for(int i = 0; i < n; i++) {
    pairs[sizes[i]]++;
    if(pairs[sizes[i]] == 2) {
      num++;
      pairs[sizes[i]] = 0;
    }
  }
  return num;
}

int main(void) {
  int n;
  scanf("%d", &n);
  int sizes[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &sizes[i]);
  }

  int num = getNumPairs(sizes, n);
  printf("%d", num/2);
}
