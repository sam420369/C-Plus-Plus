#include <iostream>

using namespace std;

int main(int argv, const char *argc[]) {
  int amount = 100;
  int quantity = 8;
  double average{0};

 // average = amount / quantity;
 // cout << average << endl;
  average = static_cast<double>(amount) / quantity;

  cout << average << endl;
  return 0;
}
