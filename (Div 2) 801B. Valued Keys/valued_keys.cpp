#include <iostream>
#include <string>
using namespace std;

bool validInput(string x, string z) {
  if(x.size() != z.size()) return false;
  int i = 0;
  while(i < x.size()) {
    if(isupper(x[i])) {
      return false;
    } else if(isupper(z[i])) {
      return false;
    }
    i++;
  }
  return true;
}

int main(void) {
  string x, z;
  cin >> x >> z;
  if(!validInput(x, z)) {
    cout << "-1" << endl;
    return 0;
  }

  string y = z;
  int i = 0;
  while(i < x.size()) {
    if(x[i] == z[i]) {
      y[i] = x[i];
    } else if(x[i] > z[i]) {
      y[i] = z[i];
    } else {
      cout << "-1" << endl;
      return 0;
    }
    i++;
  }
  cout << y << endl;
  return 0;
}
