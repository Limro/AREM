#pragma once
#include "SimulateRealTimeState.hpp"
class RealTimeExecution : public SimulateRealTimeState
{
public:
	static RealTimeExecution& getInstance()
	{
		static RealTimeExecution instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}

	virtual void Simulate(EmbeddedSystemX*) override;
	virtual void enter_state(EmbeddedSystemX*) override;
private:
	RealTimeExecution();
	RealTimeExecution(RealTimeExecution const&) = delete;
	void operator=(RealTimeExecution const&) = delete;
};

