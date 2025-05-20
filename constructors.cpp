#include <iostream>
#include <string>

using namespace std;

// class Player {
// private:
//   std::string name;
//   int health;
//   int xp;
//
// public:
//   void set_name(std::string s) { name = s; }
//
//   std::string get_name() { return name; }
//
//   Player() {
//     name = "None";
//     xp = 0;
//     health = 100;
//     cout << "Hello constructor!" << endl;
//   }
//
//   Player(std::string name_val, int health_val, int xp_val) {
//     name = name_val;
//     health = health_val;
//     xp = xp_val;
//   }
// };

// class Player {
// private:
//   std::string name;
//   int health;
//   int xp;
//
// public:
//   void set_name(std::string s) { name = s; }
//
//   std::string get_name() { return name; }
//
//   // this is initializing the values. What we did previously was just
//   assigning
//   // value but before assigning value in the previous eg there were some
//   // garbage values stores in the attributes like name xp and health. But in
//   this
//   // case since we are initizalizing the values there will be no garbage
//   values
//   // here
//   Player() : name{"none"}, health{100}, xp{0} {}
//
//   Player(string name_val, int health_val, int xp_val)
//       : name{name_val}, health{health_val}, xp{xp_val} {}
// };

// Delegating constructors
//  class Player {
//  private:
//    string name;
//    int health;
//    int xp;
//
//  public:
//    Player(string name_val, int health_val, int xp_val)
//        : name{name_val}, health{health_val}, xp{xp_val} {
//      cout << "All args constructor called" << endl;
//    }
//
//    // see how we are doing Player {nameval, ...} stuff instead of write it
//    all
//    // over again this is called delegating constructors and it works the same
//    way
//    // as above too with way less code. Make sure to create the constructor
//    with
//    // most parameters first otherwise it won't work
//    Player(string name_val) : Player{name_val, 0, 0} {
//      cout << "One arg constructor called" << endl;
//    }
//
//    Player() : Player{"None", 0, 0} {
//      cout << "No args constructor called" << endl;
//    }
//  };

class Player {
private:
  string name;
  int health;
  int xp;

public:
  //it just sets the default parameters value
  Player(string name = "None", int health = 100, int xp = 0);

  void get_name() { cout << name << endl; }
};

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
  cout << "Three args constructor called!" << endl;
}

int main() {
  // Player sakshyam;
  // sakshyam.set_name("sam");
  // cout << sakshyam.get_name() << endl;
  //
  // Player bob("Bob", 100, 12);
  // cout << bob.get_name() << endl;

  Player sakshyam;
  sakshyam.get_name();
  Player bob("Bob");
  bob.get_name();
  Player hero("Hero", 100);
  hero.get_name();
  Player mary("Mary", 100, 1);
  mary.get_name();
  return 0;
}
