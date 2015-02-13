#include <iostream>

#include "PowerOnSelfTest.hpp"
#include "Failure.hpp"
#include "Initializing.hpp"

PowerOnSelfTest::PowerOnSelfTest()
{
}


PowerOnSelfTest::~PowerOnSelfTest()
{
}

void PowerOnSelfTest::enter_state(EmbeddedSystemX* context)
{
	perform_selftest(context);
}

void PowerOnSelfTest::perform_selftest(EmbeddedSystemX* context)
{
	std::cout << "PowerOnSelfTest entered - performing selftest." << std::endl;

	if (context->get_is_first_run())
		context->SelfTestFailed(0xdeadbeef);
	else
		context->SelfTestOk();

	context->set_is_first_run(false);
}

void PowerOnSelfTest::SelfTestOk(EmbeddedSystemX* context)
{
	change_state(context, &Initializing::getInstance());
}

void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX* context, uint32_t errorNo)
{
	context->set_last_errorNo(errorNo);
	change_state(context, &Failure::getInstance());
}
