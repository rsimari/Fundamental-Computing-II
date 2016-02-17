#include <iostream>
#include "queenBoard.h"
using namespace std;

int main() {

	queenBoard chess; // empty board
	if (chess.playQueens(0) == false) {
		cout << "NO SOLUTION FOUND" << endl;
	} else {
		cout << endl << "SOLUTION:" << endl;
	}
	chess.print();

	return 0;
}