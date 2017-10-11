#include "stdafx.h"
#include "Docent.h"


Docent::Docent(std::string name)
{
	this->name = name;
}


Docent::~Docent()
{
}

std::string Docent::getName()
{
	return name;
}
