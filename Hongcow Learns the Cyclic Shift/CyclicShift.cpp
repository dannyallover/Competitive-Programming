#import <iostream>
#include <string.h>
using namespace std;

// substr(i,j) means start at index i and go up j characters
// i thought it meant start at index i and go up until character j
// i was having problems with that
int main(void) {
	string s1;
	cin >> s1;
	string s2 = s1;

	int count = 0;
	bool check = true;
	for(int i = 0; i < s1.length() - 1; i++) {
		s1 = s1.substr(s1.length()-1, 1) + s1.substr(0, s1.length()-1);
		if(s2 != s1 && check) {
			count++;
		}
		else {
			check = false;
		}
	}

	cout << count + 1;
}
