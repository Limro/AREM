#pragma once

class EmbeddedSystemX;
class EmbeddedSystemXState;

class Command
{
public:
	void virtual excecute(EmbeddedSystemX* context, EmbeddedSystemXState* state) = 0;
};