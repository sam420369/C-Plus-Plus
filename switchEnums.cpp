#include <iostream>

using namespace std;

int main(int argc, char *const argv[]) {
  enum direction { left, right, top, bottom };

  direction heading_towards = bottom;

  switch (heading_towards) {
  case left:
    cout << "You are heading towards left." << endl;
    break;
  case right:
    cout << "You are heading towards right." << endl;
    break;
  case top:
    cout << "You are heading towards top." << endl;
    break;
  case bottom:
    cout << "You are heading towards bottom." << endl;
    break;
  }

  return 0;
}
