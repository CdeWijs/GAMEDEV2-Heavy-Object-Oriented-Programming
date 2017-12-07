// Conway Game of Life.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

#include "Grid.h"
#include "Cell.h"

using namespace std;

int main()
{
	// Create grid
	Grid* grid = new Grid;

	double framerate = 0.1;
	float timeDif = 0; // delta

	float totalTime = 0; // total time passed
	clock_t clockTime;

	clockTime = clock();

	while (true)
	{
		timeDif = ((float)(clock() - clockTime)) / CLOCKS_PER_SEC;
		clockTime = clock();
		
		totalTime += timeDif;

		if (totalTime > (framerate))
		{
			// Create new grid
			grid->generateNext();
			totalTime -= (framerate);
			system("cls");
		}
	}

	return 0;
}