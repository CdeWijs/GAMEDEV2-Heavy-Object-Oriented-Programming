#include "stdafx.h"
#include "Student.h"


Student::Student(std::string name)
{
	this->name = name;
}


Student::~Student()
{
}

std::string Student::getName()
{
	return name;
}

void Student::addEC(int ec)
{
	ecs += ec;
}

int Student::getEC()
{
	return ecs;
}
