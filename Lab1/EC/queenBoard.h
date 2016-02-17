#include <iostream>
using namespace std;

class queenBoard {
	private:
		char board[8][8];
		int size;
	public:
		queenBoard();
		~queenBoard();
		void clear();
		void print();
		void addQueen(int, int);
		void removeQueen(int, int);
		bool canAdd(int, int);
		bool playQueens(int);
};