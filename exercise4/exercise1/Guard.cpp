#include "Guard.hpp"

Guard::Guard(Mutex& _mutex)
	:lock(_mutex.mutex)
{
}