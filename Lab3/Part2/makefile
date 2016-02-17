all: main

main: mainPackage.o TwoDayPackage.o Package.o OvernightPackage.o
	g++ mainPackage.o TwoDayPackage.o Package.o OvernightPackage.o -o mainPackage

%.o: %.cpp
	g++ -c $< 

clean:
	rm -f *.o 
