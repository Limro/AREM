#pragma once

#include <queue>
#include "Mutex.hpp"
#include "Guard.hpp"
#include "Conditional.hpp"

namespace abstractOS
{
	template<typename T>
	class Queue
	{
	public:
		Queue(uint64_t maxSize) : _maxSize(maxSize)
		{}

		void put(T msg)
		{
			Guard lock(mutex);
			while (msg_queue.size() >= _maxSize )
			{
				conditional.wait(lock);
			}

			msg_queue.push(msg);
			conditional.notify_all();
		}

		T get()
		{
			Guard lock(mutex);
			while (msg_queue.empty())
			{
				conditional.wait(lock);
			}

			T item = msg_queue.front();
			msg_queue.pop();
			conditional.notify_all();
			return item;
		}

	private:
		Conditional conditional;
		Mutex mutex;

		uint64_t _maxSize;
		std::queue<T> msg_queue;
	};
}

