#include <iostream>
#include "utility.h"

using std::cout;
using std::cin;
using std::endl;

bool IsPrime(int x) {

  bool prime = true;
  for (int i = 2; i <= x/i; i += 1) {
    int factor = x/i;
    if (factor*i == x) {
      cout << "factor found: " << factor << endl;
      prime = false;
      break;
    }
  }
  return 0;
}

bool Is2MorePrime(int const& x)
{
  return IsPrime(x + 2);
}
