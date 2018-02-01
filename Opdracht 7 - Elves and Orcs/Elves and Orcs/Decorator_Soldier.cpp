#include "stdafx.h"
#include "Decorator_Soldier.h"

Decorator_Soldier::Decorator_Soldier(NPC * npc) : Decorator(npc)
{
}

void Decorator_Soldier::render()
{
	Decorator::render();
	cout << "Soldier" << endl;
}
