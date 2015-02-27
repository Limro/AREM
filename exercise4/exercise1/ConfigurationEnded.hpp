#pragma once
#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class ConfigurationEnded : public Command
{
public:
	void excecute(EmbeddedSystemX* context, EmbeddedSystemXState* state) { state->ConfigurationEnded(context); }
};