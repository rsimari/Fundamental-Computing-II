#include <iostream>
#include "Puzzle.h"
using namespace std;

int main() {

    Puzzle<int> puzzle("input.txt");
    Puzzle<char> puzzleChar("input2.txt");
   
    int x, y, number;
    while (!puzzle.isSolved()) {
      
       cout << "x-pos y-pos value" << endl;
       cin >> x;
       cin >> y;
       cin >> number;
       puzzle.placeNumber(x, y, number);
       puzzle.print();
    }

    puzzleChar.placeNumber(2,4,'a');
    puzzleChar.print();
    return 0;
}
