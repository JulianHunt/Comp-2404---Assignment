using namespace std;
#include "DynArray.h"
#include "Movie.h"
#include <string>

DynArray::DynArray()
{
   size=0;
   movies = new Movie*[size];
}

DynArray::~DynArray()
{
   /*for(int i=0;i<size;i++)
   {
      delete [] movies[i];
   }*/

   //delete movies;
}

//returns the size of the DynArray
int  DynArray::getSize()
{
  return size;
}

//Increments the size variable by one
void DynArray::incSize()
{
   size=size+1;
}

//Decrement the size variable by one.
void DynArray::decSize()
{
   size--;
}

//Adds a movie to the array
void DynArray::addMovie(Movie * m)
{
   incSize();
   int s = getSize();
   cout<<s<<endl;
   Movie** temp= new Movie*[s];
   for(int i=0;i<(s-1);i++)
   {
      if(i>=0)
      { 
        cout<<"Made it here"<<endl;
        temp[i]=movies[i];
      }
   }
   temp[s-1]=m;
   //delete [] movies;
   movies=temp;
}

//Deletes a movie from the array
void DynArray::deleteMovie(string n)
{
   int s = getSize();
   Movie** temp= new Movie*[s-1];
   int count=0;
   for(int i=0;i<s;i++)
   {
      if((movies[i]->getTitle()).compare(n)==0)
      {
         delete movies[i];
      }
      else
      {
         temp[count]=movies[count];
         count++;
      }
   }
   //delete [] movies;
   movies=temp;
   decSize();
   
}
void cleanupMovies()
{

}

//Returns the nth movie in the array
Movie * DynArray::getNthMov(int i)
{
   return movies[i];
}
