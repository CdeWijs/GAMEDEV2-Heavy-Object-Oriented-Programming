#pragma once
#include "NPC.h"
class NPC_Orc : public NPC
{
public:
	NPC_Orc(string name, bool isFemale);

	void render();

private:
	string name;
	bool isFemale;
};

