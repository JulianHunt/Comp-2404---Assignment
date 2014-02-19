using namespace std;
#include "Util.h"
#include "Menu.h"
#include "Genre.h"
#include <iostream>
#include <string>
#include <sstream>


//Prompts the user asking them what they would like to do.
void Menu::mainMenu(int* choice)
{
  string s;
  int c = -1;

  cout<<"( 1 )  Add movies\n";
  cout<<"( 2 )  Delete a movie\n";
  cout<<"( 3 )  List all movies\n";
  cout<<"( 4 )  List movies by genre\n";
  cout<<"( 0 )  Exit\n";

  while (c < 0 || c > 4) {
    cout<<"Enter your selection:  ";
    getline(cin, s);
    stringstream ss(s);
    ss>>c;
  } 

  *choice=c;
}

//Prints all the movie data for a DynArray object
void Menu::printMovieData(DynArray* arr)
{

   Movie* m;
   string n;

   for(int i=0;i<arr->getSize();i++)
   {
     m=arr->getNthMov(i);
     n=m->toString();
     cout<<n<<endl;
   }
}

//Asks the user for the genre they want to display the movies of
string Menu::getInGenre()
{  
   string s;
   int i;
   getline(cin, s);
   stringstream ss(s);
   ss>>i;
   
   switch (i) {
    case 1:     return "Comedy";
    case 2:     return "Drama";
    case 3:     return "Action";
    case 4:     return "Horror";
    case 5:     return "Science-Fiction";
    case 6:     return "Adventure"; 
    case 7:     return "Western";
    default:    return "Comedy";
   }
}

//Retrieves movie data from the user to be added
void Menu::getMovieData(DynArray *arr)
{
  Movie *newMovie;
  string s;
  int num, choice;

  cout<<"\nEnter the number of movies:   ";
  getline(cin, s);
  stringstream ss(s);
  ss>>num;

  while (num > 0) {

    newMovie = new Movie();
    string name;
    cout<<"\nEnter the next movie title:   ";
    getline(cin, name);
    newMovie->setTitle(name);
    cout<<"Enter the year:  ";
    int year;
    string y;
    getline(cin, y);
    stringstream ss(y);
    ss>>year;
    newMovie->setYear(year);

    cout<<"\n(1)  Comedy \n";
    cout<<"(2)  Drama \n";
    cout<<"(3)  Action \n";
    cout<<"(3)  Horror \n";
    cout<<"(4)  Sci-Fi\n";
    cout<<"(5)  Adventure\n";
    cout<<"(6)  Western\n";
    
    int genre=-1;
    while(genre<1 || genre>7)
    {
      cout<<"Choose genre:  ";
      string g;
      getline(cin, g);
      stringstream zz(g);
      zz>>genre;
    }

    Genre* temp=new Genre();
    temp->setGenre(genre);
    
    newMovie->setGenre(temp);

    arr->addMovie(newMovie);
    cout<<"Added Movie to temp array"<<endl;
    --num;
  }
}

//Asks for the input of the movie to be deleted.
void Menu::getMovieName(string* n)
{
    string name;
    cout<<"\nEnter the movie title to be deleted:   ";
    getline(cin, name);
    *n=name; 
}

























