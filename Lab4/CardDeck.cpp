#include <iostream>
#include <deque>
#include <iterator>
#include <stdlib.h>
#include "CardDeck.h"
using namespace std;

CardDeck::CardDeck(int n) {
	int i;
	for (i = 0; i < n; i++) 
		deck.push_back(i);
}

CardDeck::~CardDeck() {}

int CardDeck::getSize() {
	return deck.size();
}

void CardDeck::shuffle() {
	// random seed
	srand(time(NULL));
	random_shuffle(deck.begin(), deck.end());
}

int CardDeck::isOrder() {
	deque<int>::iterator it;
	for (it = deck.begin(); it != deck.end() - 1; it++)
		if (*it > *(it+1))
			return 0;
	return 1;
}

ostream &operator<<(ostream &stream, CardDeck &cards) {
	deque<int>::iterator it;
	for (it = cards.deck.begin(); it != cards.deck.end(); it++) {
		stream << *it;
		if (it != cards.deck.end() - 1)
			stream << ", ";
	}
	stream << endl;	
	return stream;
}

void CardDeck::printReverse() {
	// prints in reverse using reverse operator
	deque<int>::reverse_iterator rit;
	for (rit = deck.rbegin(); rit != deck.rend(); rit++) {
		cout << *rit;
		if (rit != deck.rend() - 1)
			cout << ", ";
	}
	cout << endl;
}

int CardDeck::Deal() {
	if (deck.size() < 15) {
		newDeck(52);
		// new CardDeck? or just new deque?
	}
	int temp = deck[*(deck.end() - 1)];
	deck.pop_back();
	return temp % 11 + 1;
}

void CardDeck::newDeck(int n) {
	deque<int> temp;
	int i;
	for (i = 0; i < n; i++) 
		temp.push_back(i);
	deck = temp;
}


