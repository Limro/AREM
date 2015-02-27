#pragma once

#include <queue>
#include "Mutex.hpp"
#include "Guard.hpp"
#include "Conditional.hpp"

template<typename T>
class Queue
{
public:
	Queue();
	~Queue();

	void put(T msg)
	{

	}

	T get()
	{

	}

private:
	Mutex mutex;
	std::queue<T> msg_queue; 
};

