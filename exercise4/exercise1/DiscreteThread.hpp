#pragma once

#include "Thread.hpp"

class DiscreteThread : public Thread
{
public:
	DiscreteThread();
	void run() override;
	~DiscreteThread();
};

