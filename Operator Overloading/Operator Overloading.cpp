#include "Header.h"
#include <iostream>

int main() {
  MyString s1{"Mark"};
  MyString s2{"Hammond"};
  MyString s3;

  std::cout << s1++;

  s1.display();
  return 0;
}
