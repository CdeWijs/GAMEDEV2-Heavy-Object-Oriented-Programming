#pragma once
#include "NPC.h"
class NPC_Elf : public NPC
{
public:
	NPC_Elf(string name, bool isFemale);

	void render();

private:
	string name;
	bool isFemale;
	
};

