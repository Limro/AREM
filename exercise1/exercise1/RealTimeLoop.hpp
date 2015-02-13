#pragma once

#include "Operational.hpp"

class RealTimeLoop : public Operational
{
public:
	void Stop(EmbeddedSystemX*) override;
	void Suspend(EmbeddedSystemX*) override;
protected:
	RealTimeLoop();
	~RealTimeLoop() override;
	RealTimeLoop(RealTimeLoop const&) = delete;
	void operator=(RealTimeLoop const&) = delete;
};