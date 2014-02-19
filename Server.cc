using namespace std;
#include "Server.h"

Server::Server()
{
  collection= new Storage();
}

//Calls the storage classes retrieve function
void Server::retrieve(DynArray* movieArr)
{
   collection->retrieve(movieArr);
}

//Calls the storage classes update function      
void Server::update(UpdateType action, DynArray* movieArr)
{
   cout<<"Made it into Server update function";
   collection->update(action,movieArr);
}
