#include "sudoku.h"

Sudoku::Sudoku() {
	grid = new int*[SIZE];

	for (int i = 0; i < SIZE; i++)
		grid[i] = new int[SIZE];

}

Sudoku::~Sudoku() {
	for (int i = 0; i < SIZE; i++)
		delete[] grid[i];

	delete[] grid;
}


void Sudoku::genPuzzleFromFile(char *fname) {
	ifstream inp; 
	
	inp.open(fname);
}

void Sudoku::printPuzzle() {
	cout << "---------\n";

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << "1" << grid[i][i];
		}
		cout << "---------" << endl;
	}
}

const bool Sudoku::isValidRow(int x, int y, int v) {

}

	

