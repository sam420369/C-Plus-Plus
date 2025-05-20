#include <iostream>

using namespace std;

class deep {
private:
  int *data;

public:
  deep(int d) {
    data = new int;
    *data = d;
  };
  ~deep() {
    delete data;

    cout << "Destructor called" << endl;
  }

  deep(const deep &source) {
    data = new int;
    *data = *source.data;
    cout << "Copy constructor deep" << endl;
  }

  int getValue() { return *data; }
};

void show(deep s) { cout << s.getValue() << endl; }

int main() {
  deep one(5);
  show(one);

  return 0;
}
