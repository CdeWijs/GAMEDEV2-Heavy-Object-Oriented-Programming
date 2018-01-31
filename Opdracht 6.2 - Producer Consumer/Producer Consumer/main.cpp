#include "stdafx.h"
#include <queue>
#include <thread>
#include <mutex>
#include <iostream>

using namespace std;

int c = 0;
bool done = false;
queue<int> goods;
mutex mutexLock;

void producer()
{
	for (int i = 0; i < 500; ++i)
	{
		mutexLock.lock();
		goods.push(i);
		c++;
		mutexLock.unlock();
	}

	done = true;
}

void consumer()
{
	while (!done)
	{
		while (!goods.empty())
		{
			mutexLock.lock();
			goods.pop();
			c--;
			mutexLock.unlock();
		}
	}
}

int main()
{
	thread producerThread(producer);
	thread consumerThread(consumer);

	producerThread.join();
	consumerThread.join();
	cout << "Net: " << c << std::endl;

	char c;
	cin >> c;
}