#pragma once
#include <iostream>
#include <iomanip>
#include "Cell.h"

using namespace std;

class Grid
{
public:
	Grid();

	static const int SIZE = 25;

	// Create grid
	Cell* grid[SIZE][SIZE];

	// Create cells
	void createCells();
	void generateNext();

	// Check neighbours
	void checkNeighbours(Cell* cell);

private:
	int totalNeighbours;
};

