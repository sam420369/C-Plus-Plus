#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "movie.h"
#include <string>
#include <vector>

class Movies {
  std::vector<Movie> movies;

public:
  // constructor
  Movies();

  // destructor
  ~Movies();

  bool add_movies(std::string name, std::string rating, int watched){
    for (Movie movie: movies) {
      if(movie.get_name() == name){
        return false;
      }    

    }
  
    Movie temp{name, rating, watched};
    movies.push_back(temp);
    
    return true;
  }
};

#endif
