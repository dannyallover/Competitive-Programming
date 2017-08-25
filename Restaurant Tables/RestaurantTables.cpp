#include <iostream>
using namespace std;

int main(void) {
	int numGroups;
	int oneGroups;
	int twoGroups;

	cin >> numGroups >> oneGroups >> twoGroups;

	int tables[] = {oneGroups, 2 * twoGroups};
	int leftover[] = {0};

	int deny = 0;
	int group;
	while(numGroups != 0) {
		cin >> group;
		if(group == 1) {
			if(tables[0] > 0) {
				tables[0] -= 1;
			}
			else if(tables[1] > 0) {
				tables[1] -= 2;
				leftover[0]++;
			}
			else if(leftover[0] > 0) {
				leftover[0]--;
			}
			else {
				deny++;
			}
		}
		if(group == 2) {
			if(tables[1] > 1) {
				tables[1] -= 2;
			}
			else {
				deny += 2;
			}
		}
		numGroups--;
	}

	cout << deny;
}
