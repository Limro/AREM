#pragma once
#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class RunRealTime : public Command
{
public:
	void excecute(EmbeddedSystemX* context, EmbeddedSystemXState* state) { state->RunRealTime(context); }
};