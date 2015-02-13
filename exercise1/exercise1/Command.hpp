#pragma once
#include "EmbeddedSystemX.hpp"

class Command
{
public:
	void virtual excecute(EmbeddedSystemX* context) = 0; 
};