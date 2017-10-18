#include "stdafx.h"
#include "Grid.h"


Grid::Grid()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			grid[i][j] = '.';
		}
	}
}

void Grid::drawGrid()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			std::cout << " " << grid[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
