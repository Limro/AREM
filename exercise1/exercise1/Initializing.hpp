#pragma once

#include "EmbeddedSystemXState.hpp"

class Initializing : public EmbeddedSystemXState
{
public:
	static Initializing& getInstance()
	{
		static Initializing instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}
private:
	Initializing();
	~Initializing() override;
	Initializing(Initializing const&) = delete;
	void operator=(Initializing const&) = delete;
};