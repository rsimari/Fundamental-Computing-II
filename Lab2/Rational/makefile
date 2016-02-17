all:	main

main: mainRational.o Rational.o
	g++ mainRational.o Rational.o -o mainRational

mainRational.o: mainRational.cpp
	g++ -c mainRational.cpp

Rational.o:  Rational.cpp
	g++ -c Rational.cpp

clean:
	rm -f *.o mainRational