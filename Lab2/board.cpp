#include <iostream>
#include <time.h>
#include <unistd.h>
#include "board.h"
using namespace std;

Board::Board() {
	columns = new C4Col[10];
	nCol = 7;
}

Board::~Board() {
	delete [] columns;
}

void Board::display() {
	int i,j;
	cout << "\033[2J\033[H"; // clears the terminal
	for (i = columns[0].getMaxDiscs() - 1; i >= 0; i--) {
		cout << endl;
		for (j = 0; j < nCol; j++) {
			cout << columns[j].getDisc(i) << "|";
		}
	}
	cout << endl;
}

void Board::play(int AI) {
	int input = -2;
	static int turn = 1;
	
	while (1) {
		// prints the board
		//display();
		cout << (*this);
		
		if (input == -1) {
			cout << "\033[2J\033[H"; // clears the terminal
			break;
		}
		if (AI == 1) {
			if (turn % 2 == 1) {
				cout << "Enter The Column You Want To Place A Disc In Or -1 To Quit" << endl;
				cin >> input;
				// Player 1 plays
				columns[input]+= 'X';
			} else {
				// AI plays
				AIPlay();
			}
		} else {
			cout << "Enter The Column You Want To Place A Disc In Or -1 To Quit" << endl;
			cin >> input;
			if (turn % 2 == 1) {
				// Player 1 plays
				columns[input]+= 'X';
			} else columns[input]+= 'O'; // Player 2 plays
		} 
		// check if the game has been won
		if (checkWin()) 
			break; // ends the game
		turn++; // +1 to turn counter
	}
}

bool Board::checkWin() {
	// read board
	int i = 0; // horizontal
	int j = 0; // vertical
	int x, matchH, matchV, matchD, matchD2; // matches for horiz., vert., and both diags. 
	// it only needs to check these columns becuase 
	// if someone wins atleast one of the discs must be in this area
	for (i = 0; i < columns[0].getMaxDiscs() - 1; i++) { 
		for (j = 0; j < columns[0].getMaxDiscs(); j++) { // 0 to 5 
			if (columns[i].getDisc(j) != ' ') {  // only look at non empy places
				matchH = 0; // how many discs match
				matchV = 0;
				matchD = 0;
				matchD2 = 0;
				for (x = 0; x < 3; x++) {
					// if two next to each other are not equal
					if (i+x+1 < columns[0].getMaxDiscs() && j < columns[0].getMaxDiscs()) // prevents from going out of bounds
						if (columns[i+x].getDisc(j) == columns[i+x+1].getDisc(j))  // checks for horizontal win
							matchH++; // count matches of chars
					if (i < columns[0].getMaxDiscs() && j+x+1 < columns[0].getMaxDiscs())
						if (columns[i].getDisc(j+x) == columns[i].getDisc(j+x+1)) // checks for vertical win
							matchV++;
					if (i+x+1 < columns[0].getMaxDiscs() && j+x+1 < columns[0].getMaxDiscs())
						if (columns[i+x].getDisc(j+x) == columns[i+x+1].getDisc(j+x+1)) // upper diag
							matchD++;
					if (i+x >= 0 && j-x-1 >= 0) {
						if (columns[i+x].getDisc(j-x) == columns[i+x+1].getDisc(j-x-1))  // lower diag
							matchD2++;
					}
				}
				if (matchH == 3 || matchV == 3 || matchD == 3 || matchD2 == 3) {
					//display(); // display one more time to show winning board
					cout << (*this);
					if (columns[i].getDisc(j) == 'X')
						cout << "Player 1 Wins!" << endl;
					else cout << "Player 2 Wins!" << endl;
					return 1;
				}
			}
		}	
	}
		return 0;
}

void Board::AIPlay() {
	usleep(200000); // to make it look better
	srand(time(NULL)); // for an actual random number
	columns[rand() % columns->getMaxDiscs()].addDisc('O'); // adds random disc
}

ostream &operator<<(ostream &output, Board &x) {
	int i,j;
	cout << "\033[2J\033[H";
	for (i = x.columns[0].getMaxDiscs() - 1; i >= 0; i--) {
		output << endl;
		for (j = 0; j < x.nCol; j++) {
			output << x.columns[j].getDisc(i) << "|";
		}
	}
	output << endl;
	return (output);
}