#include "movie.h"
#include <iostream>

using namespace std;

void Movie::display() {
  cout << "Name : " << name << ", Rating : " << rating
       << ", Watched : " << watched << "\n"
       << endl;
}
