#pragma once

#include "EmbeddedSystemXState.hpp"

class Operational : public EmbeddedSystemXState
{
public:
	void Restart(EmbeddedSystemX*) override;
protected:
	Operational();
	~Operational() override;
	Operational(Operational const&) = delete;
	void operator=(Operational const&) = delete;
};