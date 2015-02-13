#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Suspend : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->Suspend(); }
};