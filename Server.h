#ifndef SERVER_H
#define SERVER_H

#include "Util.h"
#include "Storage.h"
#include <iostream>
#include <string>
#include <sstream>
class Server
{
   public:
      Server();
      void retrieve(DynArray* movieArr);
      void update(UpdateType action, DynArray* movieArr);

   private:
      Storage* collection;
};

#endif
