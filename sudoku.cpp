#include "sudoku.h"

Sudoku::Sudoku() {
	grid = new int*[SIZE];

	for (int i = 0; i < SIZE; i++)
		grid[i] = new int[SIZE];

}

Sudoku:: ~Sudoku() {
	for (int i = 0; i < SIZE; i++)
		delete[] grid[i];

	delete[] grid;
}

	

