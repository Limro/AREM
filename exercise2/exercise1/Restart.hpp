#pragma once
#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Restart : public Command
{
public:
	void excecute(EmbeddedSystemX* context, EmbeddedSystemXState* state) {
		
		state->Restart(context);
	}
};