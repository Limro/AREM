#pragma once
#include "EmbeddedSystemXStateBase.hpp"

class SimulateRealTimeState : public EmbeddedSystemXStateBase
{
public:
	virtual void RunRealTime(EmbeddedSystemX*);
	virtual void Simulate(EmbeddedSystemX*);
	virtual std::string get_input() = 0;
	virtual void output_result(std::string result) = 0;

private:
	void default_event_impl();
};

