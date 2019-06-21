#include <iostream>

using namespace std;

int main() {
  int i = 0;
  int j = 0;

  bool keep_going = true;

  while (keep_going) {

    cout << "Please entre a number: ";
    cin >> i;

    cout << "you entered " << i << " enter another number: ";
    cin >> j;

    if ( i > j) {
      cout << endl << i << " is greater than " << j << endl;
    }
    else if (i == j) {
      cout << endl << i << " is equal to " << j << endl;
    }
    else {
      cout << endl << i << " is less than " << j << endl;
    }

    //confirming whether to compare another pair...
    cout << endl << "compare another ? 0 for no: ";
    int answer = 0;
    cin >> answer;

    /**while (answer == "yes" || answer == "no") {
      cout << "kindly enter \"yes\" for another session or \"no\" to terminate: ";
    }**/

    if (answer == 0) {

      keep_going = false;

    }
  }

  return 0;
}
