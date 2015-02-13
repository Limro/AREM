#pragma once
#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"
#include "Command.hpp"

class SelfTestFailed : public Command
{
public:
	SelfTestFailed(uint32_t errorNr) { _errorNr = errorNr; }

	void excecute(EmbeddedSystemX* context, EmbeddedSystemXState* state) { state->SelfTestFailed(context, _errorNr); }

private:
	int _errorNr = 0; 
	SelfTestFailed();
};