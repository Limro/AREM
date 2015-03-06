#pragma once
#include <windows.h>
#include <string>

namespace abstractOS
{

	//--------------------------------------------------
	// T H R E A D
	//--------------------------------------------------
	class Thread
	{
	public:
		// Thread priorities
		enum ThreadPriority{
			PRIORITY_LOW = THREAD_PRIORITY_LOWEST,
			PRIORITY_BELOW_NORMAL = THREAD_PRIORITY_BELOW_NORMAL,
			PRIORITY_NORMAL = THREAD_PRIORITY_NORMAL,
			PRIORITY_ABOVE_NORMAL = THREAD_PRIORITY_ABOVE_NORMAL,
			PRIORITY_HIGH = THREAD_PRIORITY_HIGHEST,
		};
		Thread(ThreadPriority pri = Thread::PRIORITY_NORMAL, std::string _name = "");
		~Thread();
		bool setPriority(ThreadPriority pri);
		ThreadPriority getPriority();
		std::string getName();

		static ThreadPriority getCurrentThreadPriority();
		static void setCurrentThreadPriority(ThreadPriority priority);

		void start();
		virtual void run() = 0;
	private:
		ThreadPriority priority;
		std::string name;
		HANDLE handle;
		static DWORD WINAPI threadMapper(void* p)
		{
			((Thread*)p)->run();
			return 0;
		}
	};
}