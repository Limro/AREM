#pragma once
#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class SelfTestOK : public Command
{
public:
	void excecute(EmbeddedSystemX* context, EmbeddedSystemXState* state) { state->SelfTestOk(context); }
};