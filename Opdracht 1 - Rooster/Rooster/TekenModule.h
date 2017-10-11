#pragma once
#include "TekenRooster.h"
#include "UserInfo.h"

// child class van TekenRooster
// Tekent het moduleblok op de juiste plek, op basis van de dag en user info.
class TekenModule :
	public TekenRooster
{

private:
	float width, height;
	string docent, vak, klas;
	char lokaal[5];
	int datum, tijd;

public:
	TekenModule();
	~TekenModule();
};

