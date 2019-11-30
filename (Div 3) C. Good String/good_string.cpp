#include <iostream>
#include <string>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int removals = 0;
  int i = 0;
  while(i < s.length()-1) {
    if((i+1)%2 != 0 && s[i] == s[i+1]) {
      s.erase(i, 1);
      removals++;
    } else {
      i++;
    }
  }
  //bccbb
  // cant remove first -> ccbb
  if(s.length() % 2 != 0) {
    if(s.length() > 0) {
      s.erase(s.length()-1, 1);
      removals++;
      cout << removals << endl;
      cout << s << endl;
      return 0;
    } else {
      cout << removals << endl;
      cout << "" << endl;
      return 0;
    }
  }
  cout << removals << endl;
  cout << s << endl;

  return 0;
}
