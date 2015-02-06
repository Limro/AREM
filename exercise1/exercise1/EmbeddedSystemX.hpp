#pragma once

#include "EmbeddedSystemXState.hpp"

#include <string>

class EmbeddedSystemX
{
private:
	EmbeddedSystemXState* _state;
	friend class EmbeddedSystemXState;

	void change_state(EmbeddedSystemXState* new_state);

	int VersionNo;
	std::string Name;

public:
	EmbeddedSystemX();
	virtual void Restart(){ _state->Restart(this); }
	virtual void SelfTestFailed(){ _state->SelfTestFailed(this); }
	virtual void SelfTestOk(){ _state->SelfTestOk(this); }
	virtual void Exit(){ _state->Exit(this); }
	virtual void Initialized(){ _state->Initialized(this); }
	virtual void Configure(){ _state->Configure(this); }
	virtual void ConfigurationEnded(){ _state->ConfigurationEnded(this); }
	virtual void StartRun(){ _state->StartRun(this); }
	virtual void Stop(){ _state->Stop(this); }
	virtual void Suspend(){ _state->Suspend(this); }
	virtual void Resume(){ _state->Resume(this); }
	virtual void chMode(){ _state->chMode(this); }
	~EmbeddedSystemX();
};

