#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

  vector<int> vi;
  for (int i = 0; i < 11; i++) {
    vi.push_back(i);
  }

  for (auto item:vi) {
    cout << item << " ";
  }
  cout << endl;

  vector<string> vs;
  cout << "please enter three words: ";

  for (int i = 0; i < 3; i++) {
    string s;
    cin >> s;
    vs.push_back(s);
  }

  for (auto item:vs) {
    cout << item << " ";
  }
  cout << endl;

  cout << "the vector vi has " << vi.size() << " elements\n";

  vi[3] = 34;
  vi[8] = 22;
  vi[1] = 89;

  for (auto item:vi) {
    cout << item << " ";
  }
  cout << endl;

  sort(begin(vs),end(vs));

  for (auto item:vs) {
    cout << item << " ";
  }

  int threes = count (begin(vi), end(vi), 2);
  cout << "the vector, vi has " << threes << " twos\n";

  /**
  int tees = count (begin(vs[2]), end(vs[2]), "t");
  cout << "the second word in vector vs has " << tees << " letter t's\n";
  **/

  return 0; 
}
