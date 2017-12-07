#include "stdafx.h"
#include "Grid.h"


Grid::Grid()
{
	createCells();
	totalNeighbours = 0;
}

void Grid::createCells()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			grid[i][j] = new Cell(i, j, (rand() % 2 ? true : false));
		}
	}
}

void Grid::generateNext()
{

	// Display state
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << setw(2) << grid[i][j]->display();
		}
		cout << endl;
	}

	// Save state
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			grid[i][j]->savePrevState();
		}
	}

	// Check neighbours
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			checkNeighbours(grid[i][j]);
		}
	}
}

void Grid::checkNeighbours(Cell* cell)
{
	int x = cell->getX();
	int y = cell->getY();
	int size = SIZE - 1;

	// top left
	if (x > 0 && y > 0)
	{
		if (grid[x - 1][y - 1]->getState())
		{
			totalNeighbours++;
		}
	}
	// top mid
	if (y > 0)
	{
		if (grid[x][y - 1]->getState())
		{
			totalNeighbours++;
		}
	}
	// top right
	if (x < size && y > 0)
	{
		if (grid[x + 1][y - 1]->getState())
		{
			totalNeighbours++;
		}
	}
	// left
	if (x > 0)
	{
		if (grid[x - 1][y]->getState())
		{
			totalNeighbours++;
		}
	}
	// right
	if (x < size)
	{
		if (grid[x + 1][y]->getState())
		{
			totalNeighbours++;
		}
	}	
	// bottom left
	if (x > 0 && y < size)
	{
		if (grid[x - 1][y + 1]->getState()){
			totalNeighbours++;
		}
	}
	// bottom mid
	if (y < size)
	{
		if (grid[x][y + 1]->getState())
		{
			totalNeighbours++;
		}
	}
	// bottom right
	if (x < size && y < size)
	{
		if (grid[x + 1][y + 1]->getState())
		{
			totalNeighbours++;
		}
	}

	// check total neighbours when cell is alive
	if (cell->getState() == true)
	{
		// if total neighbours is too high or too low
		if (totalNeighbours > 3 || totalNeighbours < 2)
		{
			// dead
			cell->newState(false);
			totalNeighbours = 0; // reset
		}
	}
	// check total neighbours when cell is dead
	else if (cell->getState() == false)
	{
		// if total neighbours is just right for birth
		if (totalNeighbours == 2)
		{
			// alive
			cell->newState(true);
			totalNeighbours = 0; // reset
		}
	}
	// state doesn't change
	else
	{
		totalNeighbours = 0;
	}
}



