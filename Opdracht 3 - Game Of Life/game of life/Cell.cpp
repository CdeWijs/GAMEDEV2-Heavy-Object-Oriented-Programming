#include "stdafx.h"
#include "Cell.h"

Cell::Cell(int x, int y)
{
	this->x = x;
	this->y = y;
}

char Cell::display()
{
	if (state == false)
	{
		return '.';
	}
	else
	{
		return 'x';
	}
}

int Cell::getX()
{
	return x;
}

int Cell::getY()
{
	return y;
}
