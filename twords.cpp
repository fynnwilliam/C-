#include <iostream>
#include <string>

using namespace std;

int main () {

  string first = "";
  string second = "";

  cout << "please enter a word: ";
  cin >> first;

  cout << "\nplease enter another one: ";
  cin >> second;

  if (first.length() > second.length())
    cout << first + " is longer than " + second << endl;
  else if (second.length() > first.length())
    cout << second + " is longer than " + first << endl;
  else
    cout << first + " is as long as " + second << endl;

  return 0;
}
