#pragma once

#include <cstdint>

class EmbeddedSystemX;

class EmbeddedSystemXState
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

	virtual void enter_state(EmbeddedSystemX*) = 0; //abstract
	virtual ~EmbeddedSystemXState();

protected:
	void change_state(EmbeddedSystemX*, EmbeddedSystemXState*);

private:
	void default();
};

