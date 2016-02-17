all:	main

main: main.o queenBoard.o
	g++ main.o queenBoard.o -o main

main.o: main.cpp
	g++ -c main.cpp

queenBoard.o:  queenBoard.cpp
	g++ -c queenBoard.cpp

clean:
	rm -f *.o main