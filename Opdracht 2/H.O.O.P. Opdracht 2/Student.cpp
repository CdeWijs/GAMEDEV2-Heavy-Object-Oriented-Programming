#include "stdafx.h"
#include "Student.h"


Student::Student(std::string name)
{
	this->name = name;
}


Student::~Student()
{
}

void Student::addEC(int ec)
{
	ecs += ec;
}

void Student::resetEC()
{
	ecs = 0;
}

std::string Student::getName()
{
	return name;
}

int Student::getEC()
{
	return ecs;
}
