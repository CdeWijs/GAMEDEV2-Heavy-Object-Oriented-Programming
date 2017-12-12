#include "stdafx.h"
#include "NPC_Orc.h"

NPC_Orc::NPC_Orc(string name, bool isFemale)
{
	this->name = name;
	this->isFemale = isFemale;
}

void NPC_Orc::render()
{
	cout << "This orc is called: " << name << endl;
	if (isFemale)
	{
		cout << "Her role is: ";
	}
	else
	{
		cout << "His role is: ";
	}
}
