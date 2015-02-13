#pragma once

#include "EmbeddedSystemXState.hpp"

#include <cstdint>
#include <string>

class EmbeddedSystemX
{
public:
	EmbeddedSystemX(const std::string& name);
	virtual void Restart(){ _state->Restart(this); }
	virtual void SelfTestFailed(std::uint32_t errorNo){ _state->SelfTestFailed(this, errorNo); }
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

	int get_VersionNo(){ return VersionNo; }
	const std::string& get_Name() { return Name; }
	bool get_is_first_run(){ return is_first_run; }
	void set_is_first_run(bool is_first_run){ this->is_first_run = is_first_run; }

	bool get_last_errorNo(){ return last_errorNo; }
	void set_last_errorNo(uint32_t last_errorNo){ this->last_errorNo = last_errorNo; }

private:
	EmbeddedSystemXState* _state;
	friend class EmbeddedSystemXState;

	void change_state(EmbeddedSystemXState* new_state);

	const int VersionNo;
	const std::string Name;
	bool is_first_run;
	uint32_t last_errorNo;
};

