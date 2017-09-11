#pragma once
class Datum
{
private:
	int day, month, year;

public:
	Datum();
	~Datum();
	void enterDate(int date, int month, int year);
};

