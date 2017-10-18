// Conway Game of Life.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Grid.h"


int main()
{
	Grid* grid = new Grid();
	grid->drawGrid();

	char c;
	std::cin >> c;
	return 0;
}

