#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
class Queue
{
public:
	Queue();
	
	void put(T object);
	T get();
	T peek();
	int size();

private:
	vector<T> queue;
};

template<class T>
inline Queue<T>::Queue()
{
}

template<class T>
inline void Queue<T>::put(T object)
{
	// element toevoegen aan einde
	queue.push_back(object);
}

template<class T>
inline T Queue<T>::get()
{
	// element ophalen van 't begin
	T object;
	object = queue.front();
	queue.erase(queue.begin());
	return object;
}

template<class T>
inline T Queue<T>::peek()
{
	// eerste element
	return queue.front();
}

template<class T>
inline int Queue<T>::size()
{
	// aantal elementen
	return queue.size();
}
