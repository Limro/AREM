#include "Ready.hpp"
#include "EmbeddedSystemX.hpp"
#include "Mode1.hpp"
#include "Configuration.hpp"
#include "PowerOnSelfTest.hpp"
#include "UI.hpp"

Ready::Ready()
{
}

Ready::~Ready()
{
}

void Ready::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Ready entered." << std::endl;
}

void Ready::StartRun(EmbeddedSystemX* context)
{
	change_state(context, &Mode1::getInstance());
}

void Ready::Configure(EmbeddedSystemX* context)
{
	change_state(context, &Configuration::getInstance());
}