#include <iostream>
#include <deque>
using namespace std;

#ifndef CARDECK_H
#define CARDECK_H

class CardDeck {
	friend ostream &operator<<(ostream &, CardDeck &);
	private:
		deque<int> deck;
		void newDeck(int);
	public:
		CardDeck();
		~CardDeck();
		CardDeck(int);
		int getSize();
		void shuffle();
		int isOrder();
		void printReverse();
		int Deal();
};

#endif