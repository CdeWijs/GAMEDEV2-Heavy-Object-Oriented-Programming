#include "stdafx.h"
#include "ConcurrentVector.h"


ConcurrentVector::ConcurrentVector()
{
}


ConcurrentVector::~ConcurrentVector()
{
}

void ConcurrentVector::add(int element)
{
	// Lock thread
	mutex.lock();

	// Push back element
	myVector.push_back(element);

	// Unlock thread
	mutex.unlock();
}

int ConcurrentVector::getVectorSize()
{
	return myVector.size();
}
