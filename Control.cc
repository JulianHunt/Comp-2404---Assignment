using namespace std;
#include "Control.h"

Control::Control()
{
  server = new Server(); 
}

//Runs the control flow of the program based on the choice returned by the main menu function
void Control::runProgram()
{
   int choice=-1;
   while (choice != 0) {
    mMenu->mainMenu(&choice);
    if (choice == 0) {
      break;
    }
    //Initiates the adding of movies
    else if (choice == 1) {
      cout<<"Made it here"<<endl;
      DynArray* temp = new DynArray();
      cout<<"Made it here"<<endl;
      mMenu->getMovieData(temp);
      cout<<"Made it here"<<endl;
      server->update(ADD,temp);
    }
    //Initiates the deleting of movies
    else if (choice == 2) {
      string * delName;
      mMenu->getMovieName(delName);
      DynArray* temp = new DynArray();
      server->retrieve(temp);

      string n;
      Movie* m;
      bool found=false;
      for(int i=0;i<temp->getSize();i++)
      {
         m=temp->getNthMov(i);
         n=m->getTitle();
         if(delName->compare(n))
         {
            found=true;
            break;
         }
      }
      if(found)
      {
         DynArray* tempTwo= new DynArray();
         tempTwo->addMovie(m);
         server->update(DELETE,tempTwo);
         //delete tempTwo;
      }
      //delete temp;
      
    }
   //Prints out all the movies
    else if (choice == 3) {
      DynArray* temp = new DynArray();
      server->retrieve(temp);
      mMenu->printMovieData(temp);
    }
    //Prints out all the movies by genre
    else if (choice == 4) {
      DynArray* temp = new DynArray();
      server->retrieve(temp);
      DynArray* tempTwo = new DynArray();

      string genre=mMenu->getInGenre();
      Movie *m;
      Genre *g;
      string s;
      for(int i=0;i<temp->getSize();i++)
      {  
         m=temp->getNthMov(i);
         g=m->getGenre();
         s=g->toString();
         if(s.compare(genre))
         {
            tempTwo->addMovie(m);
         }
      }
      mMenu->printMovieData(tempTwo);
    }
    
  }
   
}
