#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Resume : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->Resume(); }
};