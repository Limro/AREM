#pragma once
#include "SimulateRealTimeState.hpp"
#include <string>

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

	virtual std::string get_input() override;
	virtual void output_result(std::string result) override;
private:
	RealTimeExecution();
	RealTimeExecution(RealTimeExecution const&) = delete;
	void operator=(RealTimeExecution const&) = delete;
};

