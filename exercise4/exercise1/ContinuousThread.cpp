#include "ContinuousThread.hpp"
#include "Guard.hpp"


ContinuousThread::ContinuousThread()
	:running(true), inRealTimeLoop(false)
{
	start();
}


ContinuousThread::~ContinuousThread()
{
	stop();
}

void ContinuousThread::run()
{
	while (running)
	{
		{
			abstractOS::Guard rtlock(rtmutex);
			while (!inRealTimeLoop && running)
			{
				if (!running)
					return;

				rtconditional.wait(rtlock);
			}
		}

		{
			abstractOS::Guard lock(mutex);

			auto input = sim_mode->get_input();
			auto result = app_mode->compute(input);
			sim_mode->output_result(result);
		}		
	}
}

void ContinuousThread::rtpause()
{
	abstractOS::Guard lock(rtmutex);
	inRealTimeLoop = false;
}

void ContinuousThread::rtresume()
{
	abstractOS::Guard lock(rtmutex);
	inRealTimeLoop = true;
	rtconditional.notify_all();
}

void ContinuousThread::stop()
{
	abstractOS::Guard lock(rtmutex);
	running = false;
	rtconditional.notify_all();
}

void ContinuousThread::set_app_mode(ApplicationModeSetting* new_app_mode)
{
	abstractOS::Guard lock(mutex);
	app_mode = new_app_mode;
}

void ContinuousThread::set_sim_mode(SimulateRealTimeState* new_sim_mode)
{
	abstractOS::Guard lock(mutex);
	sim_mode = new_sim_mode;
}