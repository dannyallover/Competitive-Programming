#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void) {
  int n, k;
  scanf("%d %d", &n, &k);
  int arr[n];
  for(int i = 0; i < n; i++) {
    scanf(" %d", &arr[i]);
  }
  sort(arr, arr + n);
  if(n >= k) {
    printf("%d 0", arr[n-k]);
  } else {
    printf("-1");
  }
  return 0;
}
