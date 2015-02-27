#include "Thread.hpp"
//--------------------------------------------------------
// NAME: Thread
// FUNC:
//--------------------------------------------------------
Thread::Thread(ThreadPriority pri, string _name)
	: priority(pri),
	name(_name)
{
}
//--------------------------------------------------------
// NAME: ~Thread()
// FUNC:
//--------------------------------------------------------
Thread::~Thread()
{
}
//--------------------------------------------------------
// NAME: start()
// FUNC: Creates the thread.
//--------------------------------------------------------
void Thread::start()
{
	handle = CreateThread(NULL, 0, threadMapper, (void*) this, 0, NULL);
	SetThreadPriority(handle, priority);
}
//--------------------------------------------------------
// NAME: getName()
// FUNC:
//--------------------------------------------------------
string Thread::getName()
{
	return name;
}
//--------------------------------------------------------
// NAME: setPriority
// FUNC: Attempts to change the Thread's priority to pri.
// RET: true if successful, false otherwise
//--------------------------------------------------------
bool Thread::setPriority(ThreadPriority pri)
{
	priority = pri;
	if (SetThreadPriority(handle, priority) == 0) return true;
	else return false;
}
//--------------------------------------------------------
// NAME: getPriority
// FUNC:
//--------------------------------------------------------
Thread::ThreadPriority Thread::getPriority()
{
	return priority;
}

Thread::ThreadPriority Thread::getCurrentThreadPriority()
{
	HANDLE currentThread = GetCurrentThread();
	return (ThreadPriority)GetThreadPriority(currentThread);
}

void Thread::setCurrentThreadPriority(ThreadPriority priority)
{
	HANDLE currentThread = GetCurrentThread();
	SetThreadPriority(currentThread, (int)priority);
}