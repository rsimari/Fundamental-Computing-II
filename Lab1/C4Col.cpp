#include <iostream>
#include "C4Col.h"
using namespace std;

C4Col::C4Col() {
	nDisc = 0;
	maxDisc = 6;
	int i;
	// fills array with empty chars (' ')
	for (i = 0; i < maxDisc; i++)
		pieces[i] = ' ';
	// pieces is the array of discs for each column
}

C4Col::~C4Col() {
}

int C4Col::isFull() {
	if (nDisc == maxDisc)
		// if array is already full
		return 1;
	else return 0;
}

char C4Col::getDisc(int n) {
	if (n >= maxDisc) {
		// if the n exceeds the array size
		cout << "Invalid Disc";
		return ' ';
	} else return pieces[n];
}

int C4Col::getMaxDiscs() {
	return maxDisc;	
}

void C4Col::addDisc(char newDisc) {
	if(!isFull()) {
		// adds disc to array
		pieces[nDisc++] = newDisc; 
	} else {
		// the pieces array is full
		cout << "This Column Is Full!"; 
	}
}
