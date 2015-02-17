#include "RealTimeLoop.hpp"
#include "EmbeddedSystemX.hpp"
#include "Ready.hpp"
#include "Suspended.hpp"


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

