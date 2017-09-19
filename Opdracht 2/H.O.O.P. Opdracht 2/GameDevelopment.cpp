#include "stdafx.h"
#include "GameDevelopment.h"


GameDevelopment::GameDevelopment()
{
}


GameDevelopment::~GameDevelopment()
{
}

std::string GameDevelopment::getName()
{
	return name;
}

void GameDevelopment::addDocent(Docent d)
{
	Docent docent = d;
	std::string docentName = docent.getName();
	std::cout << name << " by " << docentName << std::endl;
}
