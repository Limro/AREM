#pragma once

#include "EmbeddedSystemXState.hpp"

class Operational : public EmbeddedSystemXState
{
public:
	static Operational& getInstance()
	{
		static Operational instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}
protected:
	Operational();
	~Operational() override;
	Operational(Operational const&) = delete;
	void operator=(Operational const&) = delete;
};