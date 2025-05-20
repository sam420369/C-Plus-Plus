#include <iostream>

using namespace std;

void staticDefinedVaribale() {
  // as num is defined as static it will retain its value even if it is called
  // the second time unlike just int num{100} variable which will initialize the
  // num to 100 whenever the function call is made ignoring the +100 made in the
  // previous fucntion call
  static int num{100};
  cout << "The number is " << num << endl;
  num += 100;
  cout << "The number is " << num << endl;
}

int main(int argc, char *argv[]) {
  staticDefinedVaribale();
  staticDefinedVaribale();
  return 0;
}
