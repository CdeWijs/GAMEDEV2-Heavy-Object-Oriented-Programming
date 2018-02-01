#pragma once
#include "NPC.h"
#include "NPC_Elf.h"
#include "NPC_Orc.h"
#include "Decorator_Farmer.h"
#include "Decorator_Shaman.h"
#include "Decorator_Soldier.h"
#include <string>
#include <iostream>

using namespace std;

class ObjectFactory
{
public:
	ObjectFactory();
	~ObjectFactory();

	void display();
	void createNPC(int npcRace, int npcClass, string name, int gender);
};

