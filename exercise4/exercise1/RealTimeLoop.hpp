#pragma once

#include "Operational.hpp"

class RealTimeLoop : public Operational
{
public:
	static RealTimeLoop& getInstance()
	{
		static RealTimeLoop instance;
		return instance;
	}

	void Stop(EmbeddedSystemX*) override;
	void Suspend(EmbeddedSystemX*) override;
	void chMode(EmbeddedSystemX*) override;
	void RunRealTime(EmbeddedSystemX*) override;
	void Simulate(EmbeddedSystemX*) override;

	void enter_state(EmbeddedSystemX*) override;
private:
	RealTimeLoop();
	~RealTimeLoop() override;
	RealTimeLoop(RealTimeLoop const&) = delete;
	void operator=(RealTimeLoop const&) = delete;
};