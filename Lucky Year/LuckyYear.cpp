#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
	string num;
	cin >> num;
	bool x = true;

	int totalYears = 0;
	if(num.length() == 1) {
		cout << 1;
		exit(0);
	}
1004
	for(int i = 1; i < num.length(); i++) {
		totalYears += (10 - stoi(num.substr(i, 1))) * pow(10, num.length() - (i+1));
			if(i + 1 != num.length())
				if(stoi(num.substr(i+1, 1)) != 0)
					totalYears -= pow(10, num.length() - (i+1));
		if(stoi(num.substr(i,1)) != 0) {
			x = false;
		}
	}

	if(x)
		cout << (long)pow(10, num.length() - 1);
	else
		cout << totalYears;

	return 0;
}
