#include <iostream>

using namespace std;

int main() {
  float number = 7.1;
  float guess = 0.0;

  bool keep_going = true;

  while(keep_going) {

    cout << "please guess a number: ";
    cin >> guess;

    if (guess == number) {
      cout << "\ngreat!, you got it :)\n";
      keep_going = false;
    }
    else if (guess < number) {
      cout << "\nawww, it's too low\n";
    }
    else {
      cout << "\nhey, its too high\n";
    }
  }

  return 0;
}
