#include <iostream>
#include <string>

using namespace std;

class Player {
private:
  string name;
  int health;
  int xp;

public:
  // cannot init here will get error from compiler
  static int total_players;

  static int get_total_players() { return total_players; }

  Player(string name_val, int health_val, int xp_val)
      : name(name_val), health(health_val), xp(xp_val) {
    total_players++;
    cout << "Constructor called" << endl;
  }

  ~Player() {
    total_players--;
    cout << "Destructor called" << endl;
  }
};

int Player::total_players = 0;

int main(int argc, char **argv) {
  Player hari("Hari", 100, 0);
  cout << Player::get_total_players() << endl;

  Player har("Hari", 100, 0);
  cout << Player::get_total_players() << endl;
  Player ha("Hari", 100, 0);
  cout << Player::get_total_players() << endl;

  {
    Player h("Hari", 100, 0);
    cout << Player::get_total_players() << endl;
  }

  Player xh("Hari", 100, 0);
  cout << Player::get_total_players() << endl;

  return 0;
}
