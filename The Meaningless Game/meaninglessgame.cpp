#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	int numGames;
	cin >> numGames;

	unsigned long long score1;
	unsigned long long score2;
	unsigned long long result;
	for(int i = 0; i < numGames; i++) {
		cin >> score1;
		cin >> score2;
		
		result = cbrt(score1 * score2);
		if((score1 % result == 0) && (score2 % result) == 0) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
}
