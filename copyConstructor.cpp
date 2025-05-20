#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Player {
private:
  string name;
  int xp;
  int health;

public:
  string get_name() { return name; }
  int get_xp() { return xp; }
  int get_health() { return health; }
  Player(string name_val = "None", int xp_val = 0, int health_val = 100);

  // copy constructor
  Player(const Player &source);

  // destructor
  ~Player() { cout << "Destructor is being called for: " << name << endl; }
};

Player::Player(string name_val, int xp_val, int health_val)
    : name{name_val}, xp{xp_val}, health{health_val} {
  cout << "Three args constructor called." << endl;
}

Player::Player(const Player &source)
    : name{source.name}, xp{source.xp}, health{source.health} {
  cout << "Copied constructor of " << source.name << endl;
}

void display(Player p) {
  cout << p.get_name() << endl;
  cout << p.get_xp() << endl;
  cout << p.get_health() << endl;
}

int main() {
  Player sakshyam;
  Player bob{"bob", 10, 1000};

  //we are copying bob and using the copy constuctor to pass it by value
  //here the copy constructor will be called and transfer the data of bob to newPlayer
  Player newPlayer{bob};

  display(bob);
  display(newPlayer);
  return 0;
}
