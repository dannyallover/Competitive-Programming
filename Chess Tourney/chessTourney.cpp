#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int numOnTeam;
	cin >> numOnTeam;

	int players[numOnTeam * 2];

	for(int i = 0; i < numOnTeam * 2; i++) {
		cin >> players[i];
	}

	sort(players, players + (numOnTeam * 2));

	bool check = true;
	int count = 0;

	for(int i = 0; i < numOnTeam; i++) {
		for(int j = 0; j < numOnTeam; j++) {
			if(players[i] >= players[(numOnTeam * 2 - 1) - j])
				check = false;
		}
		if(check)
			count++;
		check = true;
	}

	if(count == numOnTeam)
		cout << "YES";
	else
		cout << "NO";
}

// first time getting it right on my first try :)
