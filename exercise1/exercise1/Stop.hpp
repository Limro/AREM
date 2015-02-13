#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Stop : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->Stop(); }
};