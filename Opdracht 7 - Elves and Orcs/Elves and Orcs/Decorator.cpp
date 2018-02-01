#include "stdafx.h"
#include "Decorator.h"

Decorator::Decorator(NPC * npc)
{
	this->npc= npc;
}

void Decorator::render()
{
	npc->render();
}
