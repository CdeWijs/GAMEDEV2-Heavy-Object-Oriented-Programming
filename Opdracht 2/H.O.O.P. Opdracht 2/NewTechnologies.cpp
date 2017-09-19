#include "stdafx.h"
#include "NewTechnologies.h"


NewTechnologies::NewTechnologies()
{
}


NewTechnologies::~NewTechnologies()
{
}

std::string NewTechnologies::getName()
{
	return name;
}

void NewTechnologies::addDocent(Docent d)
{
	Docent docent = d;
	std::string docentName = docent.getName();
	std::cout << name << " by " << docentName << std::endl;
}
