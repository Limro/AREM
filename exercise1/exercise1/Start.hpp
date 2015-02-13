#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Start : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->StartRun(); }
};