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
	//respondM2event();
}

void Mode2::respondM2event()
{
	UI::out() << "respondM2event started..." << std::endl;
}