#include <iostream>
#include "person.h"
#include "tweeter.h"
#include "status.h"

using std::cout;
using std::endl;
using std::string;

int main() {

  Person p1("william", "fynn", 47);
  {
    Tweeter t1("someone", "else", 354, "@whoever");
    std::string name2 = t1.getName();
  }

  std::cout << "after inner most block" << std::endl;
  cout << "p1: " << p1.GetName() << p1.GetNumber() << endl;
  p1.SetNumber(23);
  cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;

  status s = pending;
  s = approved;

  FileError fe = FileError::notfound;
  fe = FileError::ok;

  NetworkError ne = NetworkError::disconnected;
  ne = NetworkError::ok;

  return 0;
}
