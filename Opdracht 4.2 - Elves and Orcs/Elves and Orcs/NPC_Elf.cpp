#include "stdafx.h"
#include "NPC_Elf.h"

NPC_Elf::NPC_Elf(string name, bool isFemale)
{
	this->name = name;
	this->isFemale = isFemale;
}

void NPC_Elf::render()
{
	cout << "This Elf is called: " << name << endl;
	if (isFemale)
	{
		cout << "Her role is: ";
	}
	else
	{
		cout << "His role is: ";
	}
}
