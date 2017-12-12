#pragma once
#include "NPC.h"
class Decorator : public NPC
{

public:
	Decorator(NPC * npc);

	void render() override;

private:
	NPC * npc;
};

