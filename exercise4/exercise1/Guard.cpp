#include "Guard.hpp"

namespace abstractOS
{
	Guard::Guard(Mutex& _mutex)
		:lock(_mutex.mutex)
	{
	}
}