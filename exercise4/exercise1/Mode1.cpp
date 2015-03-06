#include "Mode1.hpp"
#include "EmbeddedSystemX.hpp"
#include "UI.hpp"
#include "Mode2.hpp"

Mode1::Mode1()
{
}

Mode1::~Mode1()
{
}

void Mode1::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Mode1 entered." << std::endl;
}

std::string Mode1::compute(std::string input)
{
	return "Mode1 result: " + input;
}

void Mode1::chMode(EmbeddedSystemX* context)
{
	change_appmode_state(context, &Mode2::getInstance());
}
