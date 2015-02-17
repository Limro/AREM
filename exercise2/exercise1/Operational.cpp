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

void Operational::Restart(EmbeddedSystemX* context)
{
	change_state(context, &PowerOnSelfTest::getInstance());
}