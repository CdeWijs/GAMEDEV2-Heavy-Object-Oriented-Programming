#pragma once
#include <string>
#include <vector>
#include <iostream>

class Student
{
public:
	Student(std::string name);
	~Student();

	void addEC(int ec);
	void resetEC();
	std::string getName();
	int getEC();

private:
	std::string name;
	int ecs = 0;
};

