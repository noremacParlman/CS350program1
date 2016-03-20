all: lab5


lab5: lab5.cpp virtualMemory.cpp
	g++ lab5.cpp virtualMemory.cpp -o lab5


link: lab5.o virtualMemory.o
	g++ lab5.o virtualMemory.o -o lab5

#lab5: lab5.cpp virtualMemory.h
#	g++ -c lab5.cpp

virtualMemory.o: virtualMemory.cpp
	g++ -c virtualMemory.cpp



clean: 
	rm -f lab5.o lab5
