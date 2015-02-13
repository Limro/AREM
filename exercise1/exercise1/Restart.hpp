#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Restart: Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->Restart(); }
};