// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include "Docent.h"
#include "Module.h"
#include <iostream>

int main()
{
	Module* newTechnologies = new Module("New Technologies", 2);
	Module* heavyOOP = new Module("Heavy Object Oriented Programming", 2);
	Module* gameDevelopment = new Module("Kermodule Game Development", 4);

	int newTechEC = newTechnologies->getEC();
	int heavyOOPEC = heavyOOP->getEC();
	int gameDevEC = gameDevelopment->getEC();

	Docent* docent1 = new Docent("Johnny Blepp");
	Docent* docent2 = new Docent("George Rooney");
	Docent* docent3 = new Docent("Robert Brownie jr.");

	newTechnologies->addDocent(*docent1);
	heavyOOP->addDocent(*docent2);
	gameDevelopment->addDocent(*docent3);

	Student* student1 = new Student("Arya");
	Student* student2 = new Student("Bran");
	Student* student3 = new Student("Sansa");
	Student* student4 = new Student("Rickon");
	Student* student5 = new Student("Rob");
	Student* student6 = new Student("Ned");
	Student* student7 = new Student("Cathlyn");
	Student* student8 = new Student("Jon");
	Student* student9 = new Student("Theon");
	Student* student10 = new Student("Old Nan");

	Student* studentenArray[10] = { student1, student2, student3, student4, student5, student6, student7, student8, student9, student10 };

	for (int i = 0; i < 10; i++)
	{
		if (i <= 3)
		{
			newTechnologies->addStudenten(*studentenArray[i]);
			studentenArray[i]->addEC(newTechEC);
			gameDevelopment->addStudenten(*studentenArray[i]);
			studentenArray[i]->addEC(gameDevEC);
			
		}
		else if (i > 3 && i <= 6)
		{
			heavyOOP->addStudenten(*studentenArray[i]);
			studentenArray[i]->addEC(heavyOOPEC);
			newTechnologies->addStudenten(*studentenArray[i]);
			studentenArray[i]->addEC(newTechEC);
			gameDevelopment->addStudenten(*studentenArray[i]);
			studentenArray[i]->addEC(gameDevEC);
		}
		else
		{
			gameDevelopment->addStudenten(*studentenArray[i]);
			studentenArray[i]->addEC(gameDevEC);
			heavyOOP->addStudenten(*studentenArray[i]);
			studentenArray[i]->addEC(heavyOOPEC);
		}
	}

	std::cout << newTechnologies->getName() << std::endl;
	std::cout << "This module has " << newTechnologies->getEC() << " ECs" << std::endl;
	newTechnologies->getDocent();
	newTechnologies->getStudenten();

	std::cout << "\n" << std::endl;

	std::cout << heavyOOP->getName() << std::endl;
	std::cout << "This module has " << heavyOOP->getEC() << " ECs" << std::endl;
	heavyOOP->getDocent();
	heavyOOP->getStudenten();

	std::cout << "\n" << std::endl;

	std::cout << gameDevelopment->getName() << std::endl;
	std::cout << "This module has " << gameDevelopment->getEC() << " ECs" << std::endl;
	gameDevelopment->getDocent();
	gameDevelopment->getStudenten();

	std::vector<Student> klassenLijst;
	for (int i = 0; i < 10; i++)
	{
		klassenLijst.push_back(*studentenArray[i]);
	}
	
	for (int i = 0; i < 2; i++)
	{
		std::cout << "\n" << std::endl;
		std::cout << "Klassenlijst: " << std::endl;
		std::vector<Student>::iterator it = klassenLijst.begin();
		while (it != klassenLijst.end())
		{
			std::cout << it->getName() << ": " << it->getEC() << std::endl;
			it++;
		}

		newTechnologies->changeEC();
	}

	char c;
	std::cin >> c;
	return 0;
}
