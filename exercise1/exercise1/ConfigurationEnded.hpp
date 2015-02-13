#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class ConfigurationEnded : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->ConfigurationEnded(); }
};