#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class chMode : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->chMode(); }
};