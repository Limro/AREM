#pragma once
#include "EmbeddedSystemXStateBase.hpp"

class SimulateRealTimeState : public EmbeddedSystemXStateBase
{
public:
	virtual void RunRealTime(EmbeddedSystemX*);
	virtual void Simulate(EmbeddedSystemX*);

private:
	void default_event_impl();
};

