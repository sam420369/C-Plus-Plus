#include "iostream"
#include <string>

using namespace std;

class Animal {
private:
  string name;

public:
  void set_name(string s) { name = s; }

  // the below const is necessary or it will give error
  // will also give error if we try to modify something in this function
  string get_name() const { return name; }

  Animal(string s) : name{s} { cout << "Constructor called" << endl; }
};

int main() {
  const Animal cow("Lara");

  // error cuz const also external func will also cause error beside the method
  // in the given class 
  // cow.set_name("NotIan");

  cout << cow.get_name() << endl;

  return 0;
}
