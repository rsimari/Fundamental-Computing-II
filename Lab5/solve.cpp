#include <iostream>
#include "PuzzleSolve.h"
using namespace std;

int main() {

    Puzzle<int> puzzle("input.txt");
    
    if (puzzle.Solve())
        puzzle.print();

    return 0;
}
