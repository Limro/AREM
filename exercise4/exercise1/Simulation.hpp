#pragma once

#include "SimulateRealTimeState.hpp"

class Simulation : public SimulateRealTimeState
{
public:
	static Simulation& getInstance()
	{
		static Simulation instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}

	virtual void enter_state(EmbeddedSystemX*) override;
	virtual void RunRealTime(EmbeddedSystemX*) override;

	virtual std::string get_input() override;
	virtual void output_result(std::string result) override;

private:
	Simulation();
	Simulation(Simulation const&) = delete;
	void operator=(Simulation const&) = delete;
};

