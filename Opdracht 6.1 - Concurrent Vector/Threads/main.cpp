// Threads.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConcurrentVector.h"

using namespace std;

ConcurrentVector* newVector = new ConcurrentVector();

void fill();

int main()
{

	// Add ints to vector
	for (int i = 0; i < 5; i++)
	{
		newVector->add(i);
	}

	// Create two new threads
	thread threadOne(fill);
	thread threadTwo(fill);

	// Join threads
	threadOne.join();
	threadTwo.join();

	cout << "Size of vector: " << newVector->getVectorSize() << endl;

	char c;
	cin >> c;
    return 0;
}

void fill()
{
	// Add ints to vector
	for (int i = 0; i < 5; i++)
	{
		newVector->add(i);
	}
}

