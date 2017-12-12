// Elves and Orcs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "NPC_Elf.h"
#include "NPC_Orc.h"

#include "Decorator_Farmer.h"
#include "Decorator_Shaman.h"
#include "Decorator_Soldier.h"

using namespace std;

int main()
{
	NPC *farmerElf = new Decorator_Farmer(new NPC_Elf("Phyrra Phimenor", true));
	farmerElf->render();

	cout << endl;

	NPC * shamanElf = new Decorator_Shaman(new NPC_Elf("Faeranduil Yesric", false));
	shamanElf->render();

	cout << endl;

	NPC * soldierElf = new Decorator_Soldier(new NPC_Elf("Nuovis Heletris", true));
	soldierElf->render();

	cout << endl;

	NPC * farmerOrc = new Decorator_Farmer(new NPC_Orc("Zurghed", false));
	farmerOrc->render();

	cout << endl;

	NPC * shamanOrc = new Decorator_Shaman(new NPC_Orc("Dugarod", false));
	shamanOrc->render();

	cout << endl;

	NPC * soldierOrc = new Decorator_Soldier(new NPC_Orc("Dura", true));
	soldierOrc->render();

	char c;
	cin >> c;
    return 0;
}

