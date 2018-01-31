#pragma once
#include <vector>
#include <thread>
#include <mutex>
#include <iostream>

using namespace std;

class ConcurrentVector
{
public:
	ConcurrentVector();
	~ConcurrentVector();

	void add(int element);
	int getVectorSize();

private:
	vector<int> myVector;
	mutex mutex;
};

