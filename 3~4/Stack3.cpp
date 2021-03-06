#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std;

int main() {
  stack<int> S;
  int a, b, x;
  string s;

  while ( cin >> s ) {
    if ( s[0] == '+' ) {
      a = S.top(); S.pop();
      b = S.top(); S.pop();
      S.push(a + b);
    } else if ( s[0] == '-' ) {
      a = S.top(); S.pop();
      b = S.top(); S.pop();
      S.push(b - a);
    } else if ( s[0] == '*') {
      a = S.top(); S.pop();
      b = S.top(); S.pop();
      S.push(a * b);
    } else if ( s[0] == '/' ) {
      a = S.top(); S.pop();
      b = S.top(); S.pop();
      if ( a == 0) {
	cout << "Error" << endl;
	break;
      }
      S.push(b / a);
    } else {
      S.push(atoi(s.c_str()));
    }
  }

  cout << S.top() << endl;

  return 0;
}
