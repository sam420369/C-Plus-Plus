#include <iostream>
#include <string.h>

using namespace std;

class Shallow {
private:
  int *data;

public:
  void setVal(int d) { *data = d; }
  int getVal() { return *data; }
  // constructor
  Shallow(int d){
    data = new int;
    *data = d;
  };

  // copy constructor
  Shallow(const Shallow &source) : data(source.data) {

    cout << "Copy constructor called - shallow copy" << endl;
  };

  // destructor
  ~Shallow() {
    delete data;
    cout << "Deleted data" << endl;
  };
};

void display(Shallow s){
 cout << s.getVal() << endl;
}

int main() {
  Shallow shall{1};
  display(shall);

  return 0;
}
