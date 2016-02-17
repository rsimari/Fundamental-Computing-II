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
        // checks the box
        int boxCol = x / 3; // y is horiz, x is vert
        int boxRow = y / 3;
        int i, j;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                if (board[i][j] == number) return false;

        // checks the rows and columns  
        if (board[x][y] != 0) return false;
        for (i = 0; i < 9; i++) {
            if (board[i][y] == number) return false;
            if (board[x][i] == number) return false;
        }
        return true;
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
    void placeNumber(int x, int y, int number) {
        if (isValid(x, y, number))
            board[x][y] = number;
        else cout << "invalid placement" << endl;
    }
    bool isSolved() {
        // this will only work if all spaces are already filled correctly
        int i,j;
        for (i = 0; i < 9; i++) 
            for (j = 0; j < 9; j++) 
                if (board[i][j] == 0) return false; 
        return true; 
    }   

};
