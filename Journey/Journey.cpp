// start of codeforces problem, Journey.
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void) {
	int *vals = (int*)malloc(sizeof(int));
	int *vals2 = (int*)malloc(sizeof(int));

	int count = 0;
	int count2 = 0;
	while(cin) {
		if(count2 >= count) {
			vals = (int*)realloc(vals, (count + 1) * sizeof(int));
			cin >> *(vals + count);
			count++;
		}
		else {
			vals2 = (int*)realloc(vals2, (count + 1) * sizeof(int));
			cin >> *(vals2 + count2);
			count2++;
		}
	}

	int *paths = (int*)malloc(sizeof(int));
}
