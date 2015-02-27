#pragma once

#include "Mutex.hpp"

class Guard
{
public:
	Guard(Mutex& _mutex);
	~Guard();
private:
	Mutex& mutex;
};

