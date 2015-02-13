#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class Initalized : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->Initialized(); }
};