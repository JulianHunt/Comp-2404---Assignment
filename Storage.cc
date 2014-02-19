using namespace std;
#include "Storage.h"
#include "DynArray.h"
#include "Util.h"

Storage::Storage()
{
   masterCollection = new DynArray();
}
      
Storage::~Storage()
{
    delete masterCollection;
}

//Takes a DynArray object as input and populates it with the movies from the masterCollection
void Storage::retrieve(DynArray* movieArr)
{
   cout<<"Here"<<endl;
   int size = masterCollection->getSize();
   for(int i=0;i<size;i++)
   {
      Movie * temp= masterCollection->getNthMov(i);
      movieArr->addMovie(temp);
   }
}

//Takes a DynArray object and UpdateType as input full of movies to add or remove from the masterCollection and removes them based on the ActionType
void Storage::update(UpdateType action, DynArray* movieArr)
{
   if(action==ADD)
   {
      int n = movieArr->getSize();
      for(int i=0;i<n;i++)
      {
         masterCollection->addMovie(movieArr->getNthMov(i));
      }
   }
   else
   {
      int n = movieArr->getSize();
      for(int i=0;i<n;i++)
      {
	 Movie * temp = movieArr->getNthMov(i);
         masterCollection->deleteMovie(temp->getTitle());
      }
   }
}

//Returns the size of the masterCollection
int Storage::getMasterSize()
{
   return masterCollection->getSize();
}
