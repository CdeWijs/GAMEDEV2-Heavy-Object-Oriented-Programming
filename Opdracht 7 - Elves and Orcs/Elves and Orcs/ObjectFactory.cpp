#include "stdafx.h"
#include "ObjectFactory.h"


ObjectFactory::ObjectFactory()
{
}


ObjectFactory::~ObjectFactory()
{
}

void ObjectFactory::display()
{
	int npcRace;
	int npcClass;
	string name;
	int gender;

	cout << "----- CREATE NEW NPC -----" << endl;
	cout << endl;
	cout << "Choose a race (1 = Elf, 2 = Orc)" << endl;
	cin >> npcRace;
	cout << "Choose a class (1 = Farmer, 2 = Shaman, 3 = Soldier)" << endl;
	cin >> npcClass;
	cout << "Enter a name: " << endl;
	cin >> name;
	cout << "Choose a gender (1 = Female, 2 = Male)" << endl;
	cin >> gender;
	cout << endl;

	createNPC(npcRace, npcClass, name, gender);
}

void ObjectFactory::createNPC(int npcRace, int npcClass, string name, int gender)
{
	NPC* character;
	if (npcRace == 1)
	{
		if (gender == 1)
		{
			if (npcClass == 1)
				character = new Decorator_Farmer(new NPC_Elf(name, true));
			else if (npcClass == 2)
				character = new Decorator_Shaman(new NPC_Elf(name, true));
			else if (npcClass == 3)
				character = new Decorator_Soldier(new NPC_Elf(name, true));
			else
				cout << "Invalid input." << endl;
		}
		else if (gender == 2)
		{
			if (npcClass == 1)
				character = new Decorator_Farmer(new NPC_Elf(name, false));
			else if (npcClass == 2)
				character = new Decorator_Shaman(new NPC_Elf(name, false));
			else if (npcClass == 3)
				character = new Decorator_Soldier(new NPC_Elf(name, false));
			else 
				cout << "Invalid input." << endl;
		}
		else
		{
			cout << "Invalid input." << endl;
		}
	}
	else if (npcRace == 2)
	{
		if (gender == 1)
		{
			if (npcClass == 1)
				character = new Decorator_Farmer(new NPC_Orc(name, true));
			else if (npcClass == 2)
				character = new Decorator_Shaman(new NPC_Orc(name, true));
			else if (npcClass == 3)
				character = new Decorator_Soldier(new NPC_Orc(name, true));
			else 
				cout << "Invalid input." << endl;
		}
		else if (gender == 2)
		{
			if (npcClass == 1)
				character = new Decorator_Farmer(new NPC_Orc(name, false));
			else if (npcClass == 2)
				character = new Decorator_Shaman(new NPC_Orc(name, false));
			else if (npcClass == 3)
				character = new Decorator_Soldier(new NPC_Orc(name, false));
			else
				cout << "Invalid input." << endl;
		}
		else
		{
			cout << "Invalid input." << endl;
		}
	}
	else
	{
		cout << "Invalid input." << endl;
	}

	character->render();
}
