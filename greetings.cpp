#include <iostream>
#include <string>

using namespace std;

int main () {

  string name;
  cout << "who are you? ";
  cin >> name;

  string greetings = "hello, " + name;

  if (name == "william") {
    greetings += " i know ya :)";
  }

  cout << greetings << endl;

  int l = greetings.length();
  cout << "\"" + greetings +  "\" is " << l << " characters long\n";
  auto space = greetings.find(" ");
  string begining = greetings.substr(space + 1);
  cout << begining << endl;
  if (begining == name)
    cout << "expected result :)\n";

  return 0;
}
