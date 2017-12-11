// Queue Semantics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "Queue.h"

using namespace std;

template<typename T, size_t SIZE> void sortArray(T(&array)[SIZE]);

int main()
{
	cout << "----- SORTING ARRAYS ------" << endl << endl;
	float floatArray[] = { 5.32f, 8.49f, 10.3f, 1.25f, 9.87f };
	string stringArray[] = { "Watcher", "Strider", "Corruptor", "Thunderjaw" };

	cout << "Float Array" << endl;
	sortArray(floatArray);

	cout << endl << endl;

	cout << "String Array" << endl;
	sortArray(stringArray);

	cout << endl << endl;

	cout << "----- QUEUE SEMANTICS -----" << endl << endl;
	Queue<string>* machines = new Queue<string>();
	machines->put("Grazer");
	machines->put("Glinthawk");
	machines->put("Ravager");
	machines->put("Scrapper");
	
	cout << machines->size() << endl;
	cout <<  machines->peek() << endl;
	cout <<  machines->get() << endl;
	cout << machines->size() << endl;
	cout << machines->peek() << endl;


	char c;
	cin >> c;
    return 0;
}

template<typename T, size_t SIZE>
void sortArray(T(&target)[SIZE])
{
	cout << "Unsorted: " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << target[i] << " ";
	}

	cout << endl << endl;

	for (int i = 1; i < SIZE; i++)
	{
		if (target[i] >= target[i - 1])
		{
			continue;
		}

		for (int j = 0; j < i; j++)
		{
			if (target[i] < target[j])
			{
				T object = target[i];
				target[i] = target[j];
				target[j] = object;
			}
		}
	}

	cout << "Sorted: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << target[i] << " ";
	}
}
