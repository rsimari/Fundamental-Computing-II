all: main

main: mainBank.o BankAccount.o Savings.o Checking.o
	g++ mainBank.o BankAccount.o Savings.o Checking.o -o mainBank

mainBank.o: mainBank.cpp
	g++ -c mainBank.cpp

BankAccount.o: BankAccount.cpp
	g++ -c BankAccount.cpp

Savings.o: Savings.cpp
	g++ -c Savings.cpp

Checking.o: Checking.cpp
	g++ -c Checking.cpp

clean:
	rm -f *.o
