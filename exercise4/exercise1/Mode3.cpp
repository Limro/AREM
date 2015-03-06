#include "Mode3.hpp"
#include "EmbeddedSystemX.hpp"
#include "UI.hpp"
#include "Mode1.hpp"

Mode3::Mode3()
{
}

Mode3::~Mode3()
{
}

void Mode3::chMode(EmbeddedSystemX* context)
{
	change_appmode_state(context, &Mode1::getInstance());
}

void Mode3::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Mode3 entered." << std::endl;
}

std::string Mode3::compute(std::string input)
{
	return "Mode3 result: " + input;
}
