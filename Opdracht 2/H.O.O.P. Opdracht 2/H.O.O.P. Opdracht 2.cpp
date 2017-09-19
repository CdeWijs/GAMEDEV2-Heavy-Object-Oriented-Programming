// H.O.O.P. Opdracht 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include "Docent.h"
#include "Module.h"
#include <iostream>

int main()
{
	Module* newTechnologies = new Module("New Technologies", 2);
	Module* heavyOOP = new Module ("Heavy Object Oriented Programming", 2);
	Module* gameDevelopment = new Module ("Kermodule Game Development", 4);

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

	for (int i = 0; i >= 8; i++)
	{
		int index1 = rand() % 10 + 1;
		int index2 = rand() % 10 + 1;
		int index3 = rand() % 10 + 1;

		newTechnologies->addStudenten(*studentenArray[index1]);
		heavyOOP->addStudenten(*studentenArray[index2]);
		gameDevelopment->addStudenten(*studentenArray[index3]);

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

	char c;
	std::cin >> c;
    return 0;
}

