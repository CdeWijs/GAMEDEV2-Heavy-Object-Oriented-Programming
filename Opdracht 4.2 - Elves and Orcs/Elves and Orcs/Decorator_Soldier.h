#pragma once
#include "Decorator.h"
class Decorator_Soldier : public Decorator
{
public:
	Decorator_Soldier(NPC * npc);

	void render() override;

private:
	NPC * npc;
};

