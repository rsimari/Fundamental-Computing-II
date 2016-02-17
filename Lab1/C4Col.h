#include <iostream>
using namespace std;
// interface
class C4Col {
	private:
		int nDisc;
		int maxDisc;
		char pieces[10];
	public:
		C4Col();
		~C4Col();
		int isFull();
		char getDisc(int);
		int getMaxDiscs();
		void addDisc(char);
};