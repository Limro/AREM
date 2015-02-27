#include "Mutex.hpp"
#include "Thread.hpp"

void Mutex::lock()
{
	if (!isOwner)
	{
		mutex.lock();
		isOwner = true;
		old_priority = Thread::getCurrentThreadPriority();
		Thread::setCurrentThreadPriority(Thread::ThreadPriority::PRIORITY_HIGH);
	}
}

void Mutex::unlock()
{ 
	if (isOwner)
	{
		mutex.unlock();
		isOwner = false;
		Thread::setCurrentThreadPriority(old_priority);
	}
}