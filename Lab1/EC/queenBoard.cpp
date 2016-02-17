#include <iostream>
#include "queenBoard.h"
using namespace std;

queenBoard::queenBoard() {
	clear();
	size = 8;
}

queenBoard::~queenBoard() {}

void queenBoard::clear() {
	int i,j;
	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			board[j][i] = '*';
}

void queenBoard::print() {
	int i,j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) 
			cout << board[j][i];
		cout << endl;
	}
	cout << endl;
}

void queenBoard::addQueen(int x, int y) {
	board[y][x] = 'Q';
}

void queenBoard::removeQueen(int x, int y) {
	board[y][x] = '*';
}

bool queenBoard::canAdd(int x, int y) {
	int i = x, j = y;
	while (i < 8) 
		if (board[j][i++] == 'Q')
			return false;
	i = x;
	while (i >= 0)
		if (board[j][i--] == 'Q')
			return false;
	i = x;
	while (j < 8)
		if (board[j++][i] == 'Q')
			return false;
	j = y;
	while (j >= 0)
		if (board[j--][i] == 'Q')
			return false;;
	i = x; j = y;
	while (i < 8 && j < 8)
		if (board[j++][i++] == 'Q')
			return false;
	i = x; j = y;
	while (i >= 0 && j >= 0)
		if (board[j--][i--] == 'Q')
			return false;;
	i = x; j = y;
	while (i >= 0 && j < 8)
		if (board[j++][i--] == 'Q')
			return false;;
	i = x; j = y;
	while (j >= 0 && i < 8)
		if (board[j--][i++] == 'Q')
			return false;
	return true;
}

bool queenBoard::playQueens(int n) {
	if (n >= 8)
		return true;
	int i;
	for (i = 0; i < 8; i++) {
		if (canAdd(n, i)) {
			addQueen(n, i);
			if (playQueens(n+1)) // called recursively
				return true;
			removeQueen(n, i);
		}
	}
	return false;
}

