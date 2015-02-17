#pragma once
#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Stop : public Command
{
public:
	void excecute(EmbeddedSystemX* context, EmbeddedSystemXState* state) { state->Stop(context); }
};