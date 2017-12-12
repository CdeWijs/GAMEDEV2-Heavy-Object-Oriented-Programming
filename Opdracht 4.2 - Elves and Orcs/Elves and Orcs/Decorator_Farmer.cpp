#include "stdafx.h"
#include "Decorator_Farmer.h"

Decorator_Farmer::Decorator_Farmer(NPC * npc) : Decorator(npc)
{
}

void Decorator_Farmer::render()
{
	Decorator::render();
	cout << "Farmer" << endl;
}
