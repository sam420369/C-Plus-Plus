#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
  // attributes
public:
  string name;
  int health{};
  int xp{};
  int items{};

private:
  string mode{"hardcore"};
  // methods
public:
  void isDead() {
    if (health == 0) {
      cout << "You died." << endl;
      return;
    }
    cout << "You have " << health << " health remaining." << endl;
  };

  int total_items(int items, int added_items) {
    items += added_items;
    return items;
  }

  string isClassLegendary(int);
};

string Player::isClassLegendary(int xp) {
  if (xp > 1000) {
    return "You have a legendary class!";
  }
  return "You don't have a legendary class.";
}

int main() {
  Player sam;

  sam.name = ("Sakshyam");
  sam.health = (14);
  sam.items = 3;
  sam.xp = 19;

  cout << sam.isClassLegendary(sam.xp) << endl;

  sam.total_items(sam.items, 5);
  cout << "You have a total of " << sam.items << " items." << endl;

  sam.isDead();

  // sam.mode = "easy";
  // cout << sam.mode << endl;

  Player *bob = new Player();
  (*bob).name = "Bob";
  (*bob).xp = 1000;
  // OR
  bob->health = 0;
  bob->isDead();
  // Player bob;
  // Player players[]{sam, bob};

  // vector<Player> bossMobs{sam};

  // bossMobs.push_back(bob);

  // just do this or the nullptr then assigning method for pointers;
  // Player *enemy = new Player();
  // delete enemy;

  return 0;
}
