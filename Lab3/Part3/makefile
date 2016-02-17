all: main

main: mainBankC.o BankAccountC.o CreditCard.o
	g++ mainBankC.o BankAccountC.o CreditCard.o -o main

%.o: %.cpp
	g++ -c $< 

clean:
	rm -f *.o
