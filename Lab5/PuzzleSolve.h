#include <iostream>
#include <vector>
#include <iterator>
#include <cstring>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>

class Puzzle {
private:
    vector< vector <T> > board; 
    bool isValid(int x, int y, int number) {
        // x is horiz, y is vert
        // checks the rows and columns  
        if (board[x][y] != 0) return false;
       
        // checks box of numbers
        int boxCol, boxRow;
        if (x < 3)
            boxRow = 0;
        else if (x < 6)
            boxRow = 3;
        else boxRow = 6;
        if (y < 3)
            boxCol = 0;
        else if (y < 6)
            boxCol = 3;
        else boxCol = 6;

        int i, j;
        for (i = boxCol; i < boxCol + 3; i++)
            for (j = boxRow; j < boxRow + 3; j++)
                if (board[i][j] == number) return false;

        for (i = 0; i < 9; i++) {
            if (board[i][y] == number) return false;
            if (board[x][i] == number) return false;
        }
        return true;
    }
    void placeNumber(int x, int y, int number) {
            board[x][y] = number; 
    }
    bool findEmpty(int &x, int &y) {
        for (x = 0; x < 9; x++) 
            for (y = 0; y < 9; y++) 
                if (board[x][y] == 0)
                    return true;             
        return false;        
    }
public:
    Puzzle() {}
    Puzzle(string input) {
        int i, j = 0; // takes in input as string and uses that as a input, not x
        int x;
        string line;
        ifstream file(input.c_str());
        while (getline(file, line)) { // reads till end of line
           vector <int> temp;
           board.push_back(temp);
           for (i = 0; i < line.size(); i++){
                if (line[i] != ' ')
                    board.at(j).push_back(line[i] - '0');
            }
            j++;
        }
        file.close();
    }
    void print() {
        int i, j;
        cout << endl;
        for (i = 0; i < board.size(); i++) {
            for (j = 0; j < board.size(); j++) {
                cout << board[i][j] << " "; 
            }
            cout << endl;
        }
    }
    bool Solve() {
        int x, y;
        if (!findEmpty(x, y)) return true; 
        int i;
        for (i = 0; i < 9; i++) {
            if (isValid(x, y, i)) { // check if is able to put there
                placeNumber(x, y, i); // try to place the number
                print();
                if(Solve()) // check if that solved the puzzle
                    return true;
                placeNumber(x, y, 0); 
            }
        }
        return false; 
    }
};
