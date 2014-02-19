using namespace std;
#include<string>
#include"Genre.h"

Genre::Genre(){};
Genre::~Genre(){};

void Genre::setGenre(int i)
{
   switch (i) {
    case 1:     mGenre=C_COMEDY;
    case 2:     mGenre=C_DRAMA;
    case 3:     mGenre=C_ACTION;
    case 4:     mGenre=C_HORROR;
    case 5:     mGenre=C_SF;
    case 6:     mGenre=C_ADVENTURE; 
    case 7:     mGenre=C_WESTERN;
    default:    mGenre=C_COMEDY;
   }
   
}

string Genre::toString()
{
  switch (mGenre) {
    case C_COMEDY:     return "Comedy";
    case C_DRAMA:      return "Drama";
    case C_ACTION:     return "Action";
    case C_HORROR:     return "Horror";
    case C_SF:         return "Science-Fiction";
    case C_ADVENTURE:  return "Adventure"; 
    case C_WESTERN:    return "Western";
    default:           return "Unknown";
   }
}

GenreType Genre::getGenre()
{
  return mGenre; 
}
