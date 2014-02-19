#ifndef GENRE_H
#define GENRE_H
using namespace std;
#include "Util.h"
#include <string>
class Genre
{
   public:
     Genre();
     ~Genre();
     GenreType getGenre();
     void setGenre(int i);
     string toString();
   private:
     GenreType mGenre;
};

#endif
