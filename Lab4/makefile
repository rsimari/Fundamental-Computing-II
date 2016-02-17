all: main blackJack

main: main.o CardDeck.o
	g++ main.o CardDeck.o -o main

blackJack: blackJack.o CardDeck.o
	g++ blackJack.o CardDeck.o -o blackJack

%.o: %.cpp
	g++ -c $<

clean:
	rm -f *.o