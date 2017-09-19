#pragma once
#include "Module.h"
#include <string>
#include <vector>


class Student
{
public:
	Student(std::string name);
	~Student();

	std::string getName();
	int getEC();
	void addEC(int ec);

private:
	std::string name;
	int ecs = 0;

};

