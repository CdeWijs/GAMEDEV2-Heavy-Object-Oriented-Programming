#pragma once
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Cell
{
public:
	Cell(int x, int y, bool state);
	char display();

	// States
	void savePrevState();
	void newState(bool s);
	bool getState();

	int getX();
	int getY();

private:
	int x;
	int y;

	bool state;
	bool prevState;

};

