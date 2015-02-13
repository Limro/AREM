#include "Mode1.hpp"
#include "EmbeddedSystemX.hpp"

#include "Mode2.hpp"

Mode1::Mode1()
{
}

Mode1::~Mode1()
{
}

void Mode1::respondM1event()
{
	std::cout << "respondM1event started..." << std::endl;
}

void Mode1::enter_state(EmbeddedSystemX* context)
{
	std::cout << "Mode1 entered." << std::endl;
}

void Mode1::chMode(EmbeddedSystemX* context)
{
	std::cout << "respondM1event stopped." << std::endl;
	change_state(context, &Mode2::getInstance());
}
