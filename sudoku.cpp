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
	for (int i = 0; i < SIZE; i++) {
		if (y != i) {
			if (grid[x][i] == v) {
				return false; 
			}
		}
	}
	return true;
}

const bool Sudoku::isValidCol(int x, int y, int v) {
	for (int i = 0; i < SIZE; i++) {
		if (x != i) {
			if (grid[i][y] == v) {
				return false;
			}
		}
	}
	return true;
}

bool const Sudoku::isValidBox(int x, int y, int v) {
	int box, r, c; 
	
	r = 3 * (x / 3);
	c = 3 * (y / 3);
	for (int i = r; i < r + 3; i++) {
		for (int j = c; c < c + 3; j++) {
			if (grid[i][j] == r)
				return false;
		}
	}
	return true; 

}

	

