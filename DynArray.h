#ifndef DYNARRAY_H
#define DYNARRAY_H

#include "Util.h"
#include "Movie.h"
class DynArray
{
   public:
     DynArray();
     ~DynArray();
     void  addMovie(Movie * m);
     void  deleteMovie(string n);
     void  cleanupMovies();
     int   getSize();
     void  incSize();
     void  decSize();
     Movie * getNthMov(int i);

   private:
     int size;
     Movie ** movies;
     

};

#endif
