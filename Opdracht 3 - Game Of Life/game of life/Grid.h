#pragma once
#include <iostream>
#include "Cell.h"
class Grid
{
public:
	static const int SIZE = 25;

	Grid();
	void drawGrid();
	char grid[SIZE][SIZE];
};

