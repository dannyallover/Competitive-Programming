#include <iostream>
using namespace std;

int main(void) {
	int numDays = 0;
	int numCandies = 0;
	cin >> numDays >> numCandies;

	int dayCandy = 0;
	int stash = 0;
	for(int i = 1; i <= numDays; i++) {
		cin >> dayCandy;
		stash += dayCandy;
		if(stash >= 8) {
			numCandies -= 8;
			stash -= 8;
		}
		else {
			numCandies -= stash;
			stash = 0;
		}

		if(numCandies <= 0) {
			cout << i;
			break;
		}
		
		if(i == numDays) {
			cout << -1;
			break;
		}
	}

	return 0;
}
