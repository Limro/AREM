#include "Suspended.hpp"
#include "EmbeddedSystemX.hpp"
#include "RealTimeLoop.hpp"
#include "Ready.hpp"
#include "PowerOnSelfTest.hpp"
#include "UI.hpp"

Suspended::Suspended()
{
}


Suspended::~Suspended()
{
}

void Suspended::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Suspended entered." << std::endl;
}

void Suspended::Stop(EmbeddedSystemX* context)
{
	change_state(context, &Ready::getInstance());
}

void Suspended::Resume(EmbeddedSystemX* context)
{
	change_state(context, &RealTimeLoop::getInstance());
}