#pragma once

#include "Guard.hpp"

#include <condition_variable>

class Conditional
{
public:
	void wait(Guard& lock);
	void notify_all();

private:
	std::condition_variable cv;
};

