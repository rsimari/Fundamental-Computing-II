#include <iostream>
#include <string>
#include <stdlib.h>
#include "CardDeck.h"
using namespace std;

int main() {

	// random seed
	srand(time(NULL));
	// makes a deck of 52 cards
	CardDeck deck(52);

	int playerSum = 0;
	int compSum = 0;
	int adder;
	int wins = 0;
	int losses = 0;
	string input = "blah";

	while (true) {
		// the dealer chooses his cards
		while (compSum < 17) {
			adder = deck.Deal();
			if (compSum + adder > 21)
				break;
			compSum += adder;
		}
		cout << "Dealer's Sum: " << compSum << endl;
		// the player chooses his cards
		while (playerSum <= 21) {
			cout << "hit/stand? ";
			cin >> input;
			if (input == "hit") {
				playerSum += deck.Deal();
				cout << "Player Sum: " << playerSum << endl;
			}
			if (input == "stand")
				break;
		}
		// determines who wins the hand
		if (playerSum > compSum && playerSum <= 21) {
			wins++;
			cout << "You Win!" << endl;
		} else { 
			losses++;
			cout << "You Lose" << endl;
		}
		// ask to play again
		cout << "Play Again? (y/n) ";
		cin >> input;
		// reset the totals for the next hand
		compSum = 0;
		playerSum = 0;
		// if the user wants to quit the game
		if (input == "n") 
			break;
	}

	cout << "Player Wins: " << wins << endl;
	cout << "Dealer Wins: " << losses << endl;


	return 0;
}
