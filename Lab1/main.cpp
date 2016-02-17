#include <iostream>
#include "board.h"
using namespace std;

int main() {

	int choice;
	cout << "1 Player or 2 Player Game? ";
	cin >> choice;
	Board c4;
	c4.play(choice);

	return 0;
}