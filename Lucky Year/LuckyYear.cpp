#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
	string num;
	cin >> num;

	int num1 = stoi(num);
	int num2 = (stoi(num.substr(0,1)) + 1) * pow(10, num.length() - 1);

	cout << num2 - num1;
}
