#include <iostream>
#include "person.h"

using std::cout;
using std::std;

Person::Person(std::string first, std::string last, int arbitrary):
  firstname(first), lastname(last), arbitrarynumber(arbitrary) {

    std::cout << "constructing " << GetName() << std::endl;
  }

Person::Person(): arbitrarynumber(0) {
  std::cout << "constructing " << GetName() << std::endl;
}

Person::~Person() {
  std::cout << "destructing " << GetName() << std::endl;
}

std::string Person::GetName() const {

  return firstname + " " + lastname;

}
