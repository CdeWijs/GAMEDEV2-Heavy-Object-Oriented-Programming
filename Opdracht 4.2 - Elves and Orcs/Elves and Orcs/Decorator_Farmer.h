#pragma once
#include "Decorator.h"
class Decorator_Farmer : public Decorator
{
public:
	Decorator_Farmer(NPC * npc);

	void render() override;

private:
	NPC * npc;
};

