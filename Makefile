CC	= g++

movie:	Main.o Genre.o Movie.o Menu.o Control.o DynArray.o Storage.o Server.o
	$(CC) -o movie Main.o Genre.o Movie.o  Menu.o Control.o DynArray.o Storage.o Server.o

Main.o:	Main.cc
	g++ -c Main.cc

Genre.o:Genre.cc Genre.h Util.h
	g++ -c Genre.cc

Menu.o: Menu.cc Menu.h Util.h
	g++ -c Menu.cc

Movie.o:Movie.cc Movie.h Util.h Genre.h Genre.cc
	g++ -c Movie.cc

DynArray.o:DynArray.cc DynArray.h Movie.cc Movie.h Util.h
	g++ -c DynArray.cc

Storage.o:Storage.cc Storage.h DynArray.cc DynArray.h Util.h
	g++ -c Storage.cc

Server.o:Server.cc Server.h Storage.cc Storage.h Util.h
	g++ -c Server.cc

Control.o:Control.cc Control.h Server.cc Server.h DynArray.cc DynArray.h Util.h
	g++ -c Control.cc

clean:
	rm -f *.o movie
