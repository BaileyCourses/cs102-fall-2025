first:	first.o Die.o
	g++ -o first first.o Die.o

first.o: first.cc Die.h
	g++ -c first.cc

Die.o:	Die.h Die.cc
	g++ -c Die.cc
