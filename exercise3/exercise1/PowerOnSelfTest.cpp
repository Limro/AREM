#include "PowerOnSelfTest.hpp"
#include "Failure.hpp"
#include "Initializing.hpp"
#include "UI.hpp"

PowerOnSelfTest::PowerOnSelfTest()
{
}


PowerOnSelfTest::~PowerOnSelfTest()
{
}

void PowerOnSelfTest::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "PowerOnSelfTest entered." << std::endl;
	perform_selftest(context);
}

void PowerOnSelfTest::perform_selftest(EmbeddedSystemX* context)
{
	if (context->get_is_first_run())
		SelfTestFailed(context, 0xdeadbeef);
	else
		SelfTestOk(context);

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
