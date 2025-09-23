demo:	demo.o DynamicArray.o WordBank.o
	g++ -o demo demo.o DynamicArray.o WordBank.o

DynamicArray.o: DynamicArray.cc DynamicArray.h
	g++ -c DynamicArray.cc

WordBank.o: WordBank.cc WordBank.h DynamicArray.h
	g++ -c WordBank.cc

demo.o: demo.cc WordBank.h
	g++ -c demo.cc
