#include <string>

class Person {

private:
  std::string firstname;
  std::string lastname;
  int arbitrarynumber;

public:
  Person(std::string first, std::string last, int arbitrary);
  Person() = default;
  ~Person();
  std::string GetName() const;
  int GetNumber() const {return arbitrarynumber;}
  void SetNumber(int number) {arbitrarynumber = number;}

};
