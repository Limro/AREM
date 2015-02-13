#include "Suspended.hpp"
#include "EmbeddedSystemX.hpp"
#include "Mode1.hpp"
#include "Ready.hpp"
#include "PowerOnSelfTest.hpp"

Suspended::Suspended()
{
}


Suspended::~Suspended()
{
}

void Suspended::enter_state(EmbeddedSystemX* context)
{
	std::cout << "Configuration entered." << std::endl;
}

void Suspended::Stop(EmbeddedSystemX* context)
{
	change_state(context, &Ready::getInstance());
}

void Suspended::Resume(EmbeddedSystemX* context)
{
	change_state(context, &Mode1::getInstance());
}

void Suspended::Restart(EmbeddedSystemX* context)
{
	change_state(context, &PowerOnSelfTest::getInstance());
}