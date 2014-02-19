using namespace std;
#include "Util.h"

string Util::getGenre(GenreType g)
{
   switch (g) {
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

