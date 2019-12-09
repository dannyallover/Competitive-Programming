#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
  switch(tolower(c)) {
    case 'a': return true;
    case 'e': return true;
    case 'i': return true;
    case 'y': return true;
    case 'o': return true;
    case 'u': return true;
    default: return false;
  }
}
string alterString(string s) {
  string temp;
  for(int i = 0; i < s.length(); i++) {
    if(isVowel(s[i])) continue;
    temp += ".";
    temp += tolower(s[i]);
  }
  return temp;
}

int main(void) {
  string s;
  cin >> s;
  cout << alterString(s) << endl;
  return 0;
}
