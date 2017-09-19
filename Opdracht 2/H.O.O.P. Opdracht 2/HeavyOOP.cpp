#include "stdafx.h"
#include "HeavyOOP.h"


HeavyOOP::HeavyOOP()
{
}


HeavyOOP::~HeavyOOP()
{
}

std::string HeavyOOP::getName()
{
	return name;
}

void HeavyOOP::addDocent(Docent d)
{
	Docent docent = d;
	std::string docentName = docent.getName();
	std::cout << name << " by " << docentName << std::endl;
}
