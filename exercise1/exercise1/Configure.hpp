#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Configure : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->Configure(); }
};