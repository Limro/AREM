#pragma once

#include "EmbeddedSystemXState.hpp"

#include <cstdint>
#include <string>

class EmbeddedSystemX
{
public:
	EmbeddedSystemX(const std::string& name);
	virtual void Restart()
	{
		std::cout << "Event: Restart." << std::endl; 
		_state->Restart(this);
	}

	virtual void SelfTestFailed(std::uint32_t errorNo)
	{ 
		std::cout << "Event: SelfTestFailed." << std::endl;
		_state->SelfTestFailed(this, errorNo); 
	}

	virtual void SelfTestOk()
	{
		std::cout << "Event: SelfTestOk." << std::endl;
		_state->SelfTestOk(this); 
	}

	virtual void Exit()
	{
		std::cout << "Event: Exit." << std::endl;
		_state->Exit(this); 
	}

	virtual void Initialized()
	{ 
		std::cout << "Event: Initialized." << std::endl;
		_state->Initialized(this); 
	}

	virtual void Configure()
	{ 
		std::cout << "Event: Configure." << std::endl;
		_state->Configure(this); 
	}

	virtual void ConfigurationEnded()
	{ 
		std::cout << "Event: ConfigurationEnded." << std::endl;
		_state->ConfigurationEnded(this); 
	}

	virtual void StartRun()
	{ 
		std::cout << "Event: StartRun." << std::endl;
		_state->StartRun(this); 
	}

	virtual void Stop()
	{
		std::cout << "Event: Stop." << std::endl;
		_state->Stop(this); 
	}

	virtual void Suspend()
	{
		std::cout << "Event: Stop." << std::endl;
		_state->Suspend(this);
	}

	virtual void Resume()
	{
		std::cout << "Event: Resume." << std::endl;
		_state->Resume(this); 
	}

	virtual void chMode()
	{
		std::cout << "Event: chMode." << std::endl;
		_state->chMode(this); 
	}

	~EmbeddedSystemX();

	int get_VersionNo(){ return VersionNo; }
	const std::string& get_Name() { return Name; }
	bool get_is_first_run(){ return is_first_run; }
	void set_is_first_run(bool is_first_run){ this->is_first_run = is_first_run; }

	uint32_t get_last_errorNo(){ return last_errorNo; }
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

