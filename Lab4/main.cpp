#include <iostream>
#include <deque>
#include <stdlib.h>
#include "CardDeck.h"
using namespace std;

void countShuffle(CardDeck);

int main() {
	// random seed
	srand(time(NULL));

	// Part 1
	CardDeck cards(10);
	cout << cards;
	while (cards.isOrder() == 0)
		cards.shuffle();
	cards.printReverse();
	cout << cards;
        cards.shuffle();

	// monkey sort
	CardDeck deckA(9);
	CardDeck deckB(8);
	CardDeck deckC(7);

 	// counts the number of shuffles it takes to get back to order
	cout << "Deck of 9" << endl;
	countShuffle(deckA);
	cout << "Deck of 8" << endl;
	countShuffle(deckB);
	cout << "Deck of 7" << endl;
	countShuffle(deckC);


	return 0;
}

void countShuffle(CardDeck deck) {
	int i, n = 0;
	// counts number of shuffles to get back to order
	for (i = 0; i < 3; i++) {
		deck.shuffle();
		while (deck.isOrder() == 0) {
			deck.shuffle();
			n++;
		}
		cout << "Number of Shuffles: " << n << endl;
	}
}

