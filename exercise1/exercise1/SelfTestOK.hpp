#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class SelfTestOK : Command
{
public:
	void excecute(EmbeddedSystemX* context) { context->SelfTestOk(); }
};