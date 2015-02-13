#include "Mode2.hpp"
#include "EmbeddedSystemX.hpp"

#include "Mode3.hpp"

Mode2::Mode2()
{
}

Mode2::~Mode2()
{
}

void Mode2::chMode(EmbeddedSystemX* context)
{
	std::cout << "respondM2event stopped." << std::endl;
	change_state(context, &Mode3::getInstance());
}

void Mode2::enter_state(EmbeddedSystemX* context)
{
	std::cout << "Mode2 entered." << std::endl;
}

void Mode2::respondM2event()
{
	std::cout << "respondM2event started..." << std::endl;
}