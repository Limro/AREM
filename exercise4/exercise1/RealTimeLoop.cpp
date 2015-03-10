#include "RealTimeLoop.hpp"
#include "EmbeddedSystemX.hpp"
#include "ApplicationModeSetting.hpp"
#include "Ready.hpp"
#include "Suspended.hpp"
#include "UI.hpp"
#include "Mode1.hpp"
#include "RealTimeExecution.hpp"

RealTimeLoop::RealTimeLoop()
{
}

RealTimeLoop::~RealTimeLoop()
{
}

void RealTimeLoop::Stop(EmbeddedSystemX* context)
{
	change_state(context, &Ready::getInstance());
}

void RealTimeLoop::Suspend(EmbeddedSystemX* context)
{
	change_state(context, &Suspended::getInstance());
}

void RealTimeLoop::chMode(EmbeddedSystemX* context)
{
	get_appmode_state(context)->chMode(context);
}

void RealTimeLoop::RunRealTime(EmbeddedSystemX* context)
{
	get_sim_state(context)->RunRealTime(context);
}

void RealTimeLoop::Simulate(EmbeddedSystemX* context)
{
	get_sim_state(context)->Simulate(context);
}

void RealTimeLoop::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "RealTimeLoop entered." << std::endl;
	change_appmode_state(context, &Mode1::getInstance());
	change_sim_state(context, &RealTimeExecution::getInstance());
	context->get_continuousThread()->rtresume();
}

void RealTimeLoop::exit_state(EmbeddedSystemX* context)
{
	UI::out() << "RealTimeLoop exit." << std::endl;
	context->get_continuousThread()->rtpause();
	change_appmode_state(context, nullptr);
	change_sim_state(context, nullptr);
}
