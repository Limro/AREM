#pragma once

#include <mutex>
#include "Thread.hpp"

class Mutex
{
public:
	void lock();
	void unlock();

private:
	std::mutex mutex;
	bool isOwner = false;
	Thread::ThreadPriority old_priority;
};

