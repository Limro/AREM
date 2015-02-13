#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Exit : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->Exit(); }
};