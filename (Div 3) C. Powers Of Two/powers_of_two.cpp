#include <stdio.h>
#include <stack>
#include <math.h>
using namespace std;

void printResults(stack<int> b, stack<int> f) {
  printf("YES\n");
  while(!b.empty()) {
    printf("%d ", b.top());
    b.pop();
  }
  while(!f.empty()) {
    printf("%d ", f.top());
    f.pop();
  }
}
void getSequence(int n, int k, stack<int> &b, stack<int> &f) {
  int num = 0;
  while(!b.empty() && (b.size() + f.size()) < k) {
    num = b.top();
    b.pop();
    num = num/2;
    if(num == 1) {
      f.push(num);
      f.push(num);
    } else {
      b.push(num);
      b.push(num);
    }
  }
  if(b.size() + f.size() != k) {
    printf("NO");
  } else {
    printResults(b, f);
  }
}
void breakUpN(int n, int k, stack<int> &b, stack<int> &f) {
  int i = 31;
  if((n & 0x1) == 1) f.push(1);
  while(i > 0) {
    if(((n >> i) & 0x1) == 1) b.push(pow(2, i));
    i--;
  }
}
int main(void) {
  int n, k;
  scanf("%d %d", &n, &k);

  stack<int> b;
  stack<int> f;
  breakUpN(n, k, b, f);
  getSequence(n, k, b, f);
  return 0;
}
