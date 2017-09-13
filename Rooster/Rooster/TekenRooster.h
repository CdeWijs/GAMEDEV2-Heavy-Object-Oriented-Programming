#pragma once
#include <iostream>;
using namespace std;

// Ontvangt informatie van de gebruiker uit UserInfo en tekent het rooster
// op basis van de input.
class TekenRooster
{
private:
	float width, height;
	string dag;
	int datum, tijd;

public:
	TekenRooster();
	~TekenRooster();

	void getInformation();
};

