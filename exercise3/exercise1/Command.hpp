#pragma once
#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"
#include "EmbeddedSystemXState.hpp"

class Command
{
public:
	void virtual excecute(EmbeddedSystemX* context, EmbeddedSystemXState* state) = 0;
};