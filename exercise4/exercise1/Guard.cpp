#include "Guard.hpp"

Guard::Guard(Mutex& _mutex)
	:mutex(_mutex)
{
	mutex.lock();
}

Guard::~Guard()
{
	mutex.unlock();
}
