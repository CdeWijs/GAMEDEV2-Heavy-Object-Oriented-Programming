#pragma once
#include <iostream>
#include <ctime>
class Cell
{
public:
	Cell(int x, int y);
	char display();

	int getX();
	int getY();

private:
	int x;
	int y;
	bool state;
	bool lastState;
};

