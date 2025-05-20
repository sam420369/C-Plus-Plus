#include <iostream>
#include <vector>

class Move {
private:
  int *data;

public:
  void set_value(int d) { *data = d; }
  int get_value() { return *data; }

  // constructor
  Move(int d) {
    data = new int;
    *data = d;
    std::cout << "constructor called" << std::endl;
  }

  //even if there was a copy constructor here, move const would have been called cuz of r val and l val shit
  // Move constructor
  Move(Move &&source) noexcept : data{source.data} {
    source.data = nullptr;
    std::cout << "Move constructor called" << std::endl;
  }

  // Destructor
  ~Move() {
    if (data != nullptr) {
      std::cout << "Destructor called for " << *data << std::endl;

    } else {
      std::cout << "Destructor called for nullptr" << std::endl;
    }
    delete data;
  }
};

int main() {
  std::vector<Move> vec;

  vec.push_back(Move{10});
  vec.push_back(Move{100});
  vec.push_back(Move{1000});
  vec.push_back(Move{10000});
  vec.push_back(Move{100000});

  return 0;
}
