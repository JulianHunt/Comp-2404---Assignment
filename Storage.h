#ifndef STORAGE_H
#define STORAGE_H

#include "Util.h"
#include "DynArray.h"

class Storage
{

   public:
      Storage();
      ~Storage();
      void retrieve(DynArray* movieArr);
      void update(UpdateType action, DynArray* movieArr);
      int  getMasterSize();
   private:
      DynArray* masterCollection;
};

#endif
