#include "stdafx.h"
#include "Module.h"


Module::Module(std::string name, int ec)
{
	this->name = name;
	this->ec = ec;
}


Module::~Module()
{
}

std::string Module::getName()
{
	return name;
}

int Module::getEC()
{
	return ec;
}

void Module::changeEC()
{
	ec++;
}

void Module::addDocent(Docent docent)
{
	docenten.push_back(docent);
}

void Module::addStudenten(Student student)
{
	studenten.push_back(student);
}

void Module::getDocent()
{
	std::vector<Docent>::iterator it = docenten.begin();
	while (it != docenten.end())
	{
		std::cout << "Docent: " << it->getName() << std::endl;
		it++;
	}
}

void Module::getStudenten()
{
	std::cout << "Studenten: " << std::endl;
	std::vector<Student>::iterator it = studenten.begin();
	while (it != studenten.end())
	{
		std::cout << it->getName() << std::endl;
		it++;
	}
}
