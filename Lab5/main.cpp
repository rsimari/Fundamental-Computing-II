#include <iostream>
#include "Puzzle.h"
using namespace std;

int main() {

    Puzzle<int> puzzle("input.txt");
    puzzle.placeNumber(0,0,7);
    puzzle.print();

    return 0;
}
