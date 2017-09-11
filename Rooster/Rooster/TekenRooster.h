#pragma once
#include <iostream>;
using namespace std;

class TekenRooster
{
private:
	float tijd;
	string dag, module, docent, lokaal;

public:
	TekenRooster();
	~TekenRooster();
	void getInformation();
	void showClass(float tijd, string dag, string module, string docent, string lokaal);
};

