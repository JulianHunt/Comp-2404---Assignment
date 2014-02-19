#ifndef CONTROL_H
#define CONTROL_H

#include "Util.h"
#include "Menu.h"
#include "DynArray.h"
#include "Genre.h"
#include "Server.h"
class Control
{
   public:
        Control();
	void runProgram();
        Menu* mMenu;
        Server* server;
   	
};

#endif
