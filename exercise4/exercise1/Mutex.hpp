#pragma once

#include <mutex>
#include "Thread.hpp"

class Guard;

class Mutex
{
public:
	void lock();
	void unlock();

private:
	friend class Guard;

	std::mutex mutex;
	bool isOwner = false;
	Thread::ThreadPriority old_priority;
};

