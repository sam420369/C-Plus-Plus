
#include <cstring>
#include <iostream>

class Mystr {
private:
  char *str;

public:
  // Constructors
  Mystr() : str(nullptr) {} // Initialize str to nullptr
  Mystr(const char *s) {
    str = new char[std::strlen(s) + 1];
    std::strcpy(str, s);
  }

  // Copy constructor
  Mystr(const Mystr &source) : str(nullptr) {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
  }

  // Destructor
  ~Mystr() { delete[] str; }

  // Copy assignment
  Mystr &operator=(const Mystr &rhs) {
    if (this == &rhs) {
      return *this;
    }

    delete[] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
  }

  void display() const { std::cout << str << std::endl; }

  int get_length() const { return std::strlen(str); }

  const char *get_str() const { return str; }
};

int main() {
  Mystr empty;
  Mystr hello("Hello");

  empty = hello;

  std::cout << empty.get_str() << std::endl;

  empty = "Hello World";

  empty.display();

  return 0;
}
