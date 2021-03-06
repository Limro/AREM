#include "EmbeddedSystemX.hpp"
#include "PowerOnSelfTest.hpp"

EmbeddedSystemX::EmbeddedSystemX(const std::string& name)
	:Name(name), VersionNo(1), is_first_run(true), last_errorNo(0)
{
	change_state(&PowerOnSelfTest::getInstance());
}


EmbeddedSystemX::~EmbeddedSystemX()
{
}

void EmbeddedSystemX::change_state(EmbeddedSystemXState* new_state)
{
	_state = new_state;
	_state->enter_state(this);
}

void EmbeddedSystemX::HandleEvent(Command* eventCommand)
{
	eventCommand->excecute(this, _state);
}