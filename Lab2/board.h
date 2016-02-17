#include <iostream>
#include "C4Col.h"
using namespace std;
// interface
class Board {
	friend ostream &operator<<(ostream &, Board &);
	private:
		int nCol;
		C4Col *columns;	
		bool checkWin();
		void AIPlay();
	public:
		Board();
		~Board();
		void display();
		void play(int);
};