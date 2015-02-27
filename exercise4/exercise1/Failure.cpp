#include "Failure.hpp"
#include "PowerOnSelfTest.hpp"
#include "EmbeddedSystemX.hpp"
#include "UI.hpp"

Failure::Failure()
{
}

Failure::~Failure()
{
}

void Failure::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Failure entered." << std::endl;
	display(context->get_last_errorNo());
}

void Failure::Restart(EmbeddedSystemX* context)
{
	change_state(context, &PowerOnSelfTest::getInstance());
}

void Failure::display(uint32_t errorNo)
{
	UI::out() << "Failure - error number: " << std::hex << errorNo << std::dec << std::endl;
}
