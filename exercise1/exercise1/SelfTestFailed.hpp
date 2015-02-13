#pragma once
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class SelfTestFailed : Command
{
public:
	SelfTestFailed(int errorNr) { _errorNr = errorNr; }

	void excecute(EmbeddedSystemX* context) { context->SelfTestFailed(_errorNr); }

private:
	int _errorNr = 0; 
	SelfTestFailed();
};