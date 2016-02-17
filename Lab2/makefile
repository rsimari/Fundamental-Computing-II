all:	main

main: main.o C4Col.o board.o
	g++ main.o C4Col.o board.o -o main

main.o: main.cpp
	g++ -c main.cpp

C4Col.o:  C4Col.cpp
	g++ -c C4Col.cpp

board.o: board.cpp
	g++ -c board.cpp

clean:
	rm -f *.o main
