using namespace std;
#include<string>
#include"Movie.h"

//Returns the title of the movie
string Movie::getTitle()
{
  return title;
}

//Returns the year of the movie
int Movie::getYear()
{
  return year;
}

//Returns the Genre of the movie
Genre* Movie::getGenre()
{
  return mGenre;
}

//Sets the title of the movie
void Movie::setTitle(string n)
{
  title=n;
}

//Sets the year of the movie
void Movie::setYear(int y)
{
  year=y;
}

//sets the genre of the movie
void Movie::setGenre(Genre * g)
{
  mGenre=g;
}

//Converts the movie to a string to display
string Movie::toString()
{
  string s=mGenre->toString();
  return"Title: %s",title;
}

