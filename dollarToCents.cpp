#include <iostream>
#include <sys/types.h>

using namespace std;

// 1 dollar = 100 cents
// 1 quater = 25 cents
// 1 dime = 10 cents
// 1 nickel = 5 cents
// 1 penny = 1 cent

int main(int argv, const char *argc[]) {
  int cents{0}, dollar{0}, quater{0}, dime{0}, nickel{0}, penny{0};
  cout << "Enter amount in cents: ";
  cin >> cents;

  dollar = cents / 100;
  quater = (cents - dollar * 100) / 25;
  dime = (cents - (dollar * 100 + quater * 25)) / 10;
  nickel = (cents - (dollar * 100 + quater * 25 + dime * 10)) / 5;
  penny = (cents - (dollar * 100 + quater * 25 + dime * 10 + nickel * 5));

  // dollar=cents/100;
  // cents=dollar%100;

  // quater=cents/25;
  // cents=quater%25;

  cout << "Dollars: " << dollar << endl;
  cout << "Quater: " << quater << endl;
  cout << "Dime: " << dime << endl;
  cout << "Nickel: " << nickel << endl;
  cout << "Penny: " << penny << endl;
  return 0;
}
