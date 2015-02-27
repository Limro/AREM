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

void Mode1::respondM1event()
{
	UI::out() << "respondM1event started..." << std::endl;
}

void Mode1::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Mode1 entered." << std::endl;
	//respondM1event();
}

void Mode1::chMode(EmbeddedSystemX* context)
{
	change_appmode_state(context, &Mode2::getInstance());
}
