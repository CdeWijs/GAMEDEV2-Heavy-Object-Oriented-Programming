#pragma once
#include <string>

class Docent
{
public:
	Docent(std::string name);
	~Docent();

	std::string getName();

private:
	std::string name;
};

