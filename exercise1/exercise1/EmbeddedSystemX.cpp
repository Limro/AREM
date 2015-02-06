#include "EmbeddedSystemX.hpp"
#include "PowerOnSelfTest.hpp"

EmbeddedSystemX::EmbeddedSystemX()
{
	_state = &PowerOnSelfTest::getInstance();
}


EmbeddedSystemX::~EmbeddedSystemX()
{
}

void EmbeddedSystemX::change_state(EmbeddedSystemXState* new_state)
{
	_state = new_state;
	//_state->enter_state(this);
}