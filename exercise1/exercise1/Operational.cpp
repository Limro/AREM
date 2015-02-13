#include "Operational.hpp"
#include "EmbeddedSystemX.hpp"

#include "Ready.hpp"
#include "Suspended.hpp"
#include "PowerOnSelfTest.hpp"

Operational::Operational()
{
}

Operational::~Operational()
{
}

void Operational::Stop(EmbeddedSystemX* context)
{
	change_state(context, &Ready::getInstance());
}

void Operational::Suspend(EmbeddedSystemX* context)
{
	change_state(context, &Suspended::getInstance());
}

void Operational::Restart(EmbeddedSystemX* context)
{
	change_state(context, &PowerOnSelfTest::getInstance());
}