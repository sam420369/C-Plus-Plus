#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie {
  std::string name;
  std::string rating;
  int watched;

public:
  Movie(std::string name_val, std::string rating_val, int watched_val)
      : name(name_val), rating(rating_val), watched(watched_val) {}

  std::string get_name() { return name; }

  void display();
};

#endif
