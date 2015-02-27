#pragma once

#include <cstdint>

#include "EmbeddedSystemXStateBase.hpp"

class EmbeddedSystemXState : public EmbeddedSystemXStateBase
{
public:
	virtual void Restart(EmbeddedSystemX*);
	virtual void SelfTestFailed(EmbeddedSystemX*, uint32_t errorNo);
	virtual void SelfTestOk(EmbeddedSystemX*);
	virtual void Exit(EmbeddedSystemX*);
	virtual void Initialized(EmbeddedSystemX*);
	virtual void Configure(EmbeddedSystemX*);
	virtual void ConfigurationEnded(EmbeddedSystemX*);
	virtual void StartRun(EmbeddedSystemX*);
	virtual void Stop(EmbeddedSystemX*);
	virtual void Suspend(EmbeddedSystemX*);
	virtual void Resume(EmbeddedSystemX*);
	virtual void chMode(EmbeddedSystemX*);
	virtual void RunRealTime(EmbeddedSystemX*);
	virtual void Simulate(EmbeddedSystemX*);
	
private:
	void default_event_impl();
};

