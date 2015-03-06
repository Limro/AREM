#include "Conditional.hpp"

namespace abstractOS
{

	void Conditional::wait(Guard& lock)
	{
		cv.wait(lock.lock);
	}

	void Conditional::notify_all()
	{
		cv.notify_all();
	}
}