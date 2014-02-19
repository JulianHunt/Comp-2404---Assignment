#ifndef MOVIE_H
#define MOVIE_H
#include "Util.h"
#include "Genre.h"
using namespace std;
#include <string>
class Movie
{
   public:
     string    getTitle();
     int       getYear();
     Genre *   getGenre();
     void      setTitle(string n);
     void      setYear(int y);
     void      setGenre(Genre * g);
     string    toString();
   private:
     string title;
     int    year;
     Genre * mGenre;
};

#endif

	  
		
		
	
