#include "player.h"
#include <iostream>
#include <string>

using namespace std;

void Player::isDead() {
  if (health == 0) {
    cout << "You are dead" << endl;
  } else {
    cout << "You have " << health << " health remaining" << endl;
  }
}

string Player::isPlayerClassLegendary() {
  if (xp == 1000) {
    return "You have a legendary class!";
  } else
    return "You don't have a legendary class";
}

int main() {
  Player sakshyam;

  sakshyam.isDead();
  cout << sakshyam.isPlayerClassLegendary() << endl;

  return 0;
}
