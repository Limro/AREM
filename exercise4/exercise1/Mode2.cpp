#include "Mode2.hpp"
#include "EmbeddedSystemX.hpp"
#include "UI.hpp"
#include "Mode3.hpp"

Mode2::Mode2()
{
}

Mode2::~Mode2()
{
}

void Mode2::chMode(EmbeddedSystemX* context)
{
	change_appmode_state(context, &Mode3::getInstance());
}

void Mode2::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Mode2 entered." << std::endl;
	context->get_continuousThread()->set_app_mode(this);
}

std::string Mode2::compute(std::string input)
{
	return "Mode2 result: " + input;
}