#pragma once
#include "Thread.hpp"
#include "Mutex.hpp"
#include "Conditional.hpp"

#include "ApplicationModeSetting.hpp"
#include "SimulateRealTimeState.hpp"

class ContinuousThread : public abstractOS::Thread
{
public:

	ContinuousThread();
	void run() override;
	void stop();

	void set_app_mode(ApplicationModeSetting* new_app_mode);
	void set_sim_mode(SimulateRealTimeState* new_sim_mode);

	void rtpause();
	void rtresume();

	~ContinuousThread();

private:
	ApplicationModeSetting* app_mode;
	SimulateRealTimeState* sim_mode;
	abstractOS::Mutex mutex;

	bool running;

	bool inRealTimeLoop;
	abstractOS::Mutex rtmutex;
	abstractOS::Conditional rtconditional;
};

