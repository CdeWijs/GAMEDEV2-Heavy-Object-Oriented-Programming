#pragma once
#include "Docent.h"
#include "Student.h"
#include <vector>
#include <iostream>

class Module
{
public:
	Module(std::string name, int ec);
	~Module();
	
	std::string getName();
	int getEC();
	void addDocent(Docent docent);
	void addStudenten(Student student);

	void getDocent();
	void getStudenten();

private:
	std::string name;
	int ec;

	std::vector<Docent> docenten;
	std::vector<Student> studenten;
	
	
};

