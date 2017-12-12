#pragma once
#include "Decorator.h"
class Decorator_Shaman : public Decorator
{
public:
	Decorator_Shaman(NPC * npc);

	void render() override;

private:
	NPC * npc;
};

