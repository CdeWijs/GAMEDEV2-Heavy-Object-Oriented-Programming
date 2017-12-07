#include "stdafx.h"
#include "Cell.h"

Cell::Cell(int x, int y, bool state)
{
	this->x = x;
	this->y = y;
	this->state = state;
}

void Cell::savePrevState()
{
	prevState = state;
}

void Cell::newState(bool s)
{
	state = s;
}

bool Cell::getState()
{
	return prevState;
}

int Cell::getX()
{
	return x;
}

int Cell::getY()
{
	return y;
}

char Cell::display()
{
	if (state == false){
		return '.';
	}
	else {
		return 'O';
	}
}
