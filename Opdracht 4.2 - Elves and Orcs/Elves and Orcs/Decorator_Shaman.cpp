#include "stdafx.h"
#include "Decorator_Shaman.h"

Decorator_Shaman::Decorator_Shaman(NPC * npc) : Decorator(npc)
{
}

void Decorator_Shaman::render()
{
	Decorator::render();
	cout << "Shaman" << endl;
}
