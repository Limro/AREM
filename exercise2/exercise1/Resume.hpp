#pragma once
#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Resume : public Command
{
public:
	void excecute(EmbeddedSystemX* context, EmbeddedSystemXState* state) { state->Resume(context); }
};