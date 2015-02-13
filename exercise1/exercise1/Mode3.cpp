#include "Mode3.hpp"
#include "EmbeddedSystemX.hpp"

#include "Mode1.hpp"

Mode3::Mode3()
{
}

Mode3::~Mode3()
{
}

void Mode3::chMode(EmbeddedSystemX* context)
{
	std::cout << "respondM3event stopped." << std::endl;
	change_state(context, &Mode1::getInstance());
}

void Mode3::enter_state(EmbeddedSystemX* context)
{
	std::cout << "Mode3 entered." << std::endl;
}

void Mode3::respondM3event()
{
	std::cout << "respondM3event started..." << std::endl;
}