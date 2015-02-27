#pragma once

#include "Mutex.hpp"

class Conditional;

class Guard
{
public:
	Guard(Mutex& _mutex);
	~Guard();
private:
	friend class Conditional;
	std::unique_lock<std::mutex> lock;
};

