demo: demo.o Array.o
	g++ -o demo demo.o Array.o

demo.o: demo.cc Array.h
	g++ -c demo.cc

Array.o: Array.cc Array.h
	g++ -c Array.cc

clean:
	/bin/rm -f *.o demo

