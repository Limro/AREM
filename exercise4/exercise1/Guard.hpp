#pragma once

#include "Mutex.hpp"

namespace abstractOS
{
	class Conditional;

	class Guard
	{
	public:
		Guard(Mutex& _mutex);
	private:
		friend class Conditional;
		std::unique_lock<std::mutex> lock;
	};

}
