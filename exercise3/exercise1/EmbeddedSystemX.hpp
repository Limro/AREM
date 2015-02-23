#pragma once

#include "EmbeddedSystemXState.hpp"
#include "SimulateRealTimeState.hpp"
#include "ApplicationModeSetting.hpp"
#include "Command.hpp"

#include <cstdint>
#include <string>

class EmbeddedSystemX
{
public:
	EmbeddedSystemX(const std::string& name);
	
	void HandleEvent(Command* eventCommand);

	~EmbeddedSystemX();

	int get_VersionNo(){ return VersionNo; }
	const std::string& get_Name() { return Name; }
	bool get_is_first_run(){ return is_first_run; }
	void set_is_first_run(bool is_first_run){ this->is_first_run = is_first_run; }

	uint32_t get_last_errorNo(){ return last_errorNo; }
	void set_last_errorNo(uint32_t last_errorNo){ this->last_errorNo = last_errorNo; }

private:
	EmbeddedSystemXState* _state;
	SimulateRealTimeState* _sim_state;
	ApplicationModeSetting* _appmode_state;

	friend class EmbeddedSystemXState;
	friend class SimulateRealTimeState;
	friend class ApplicationModeSetting;

	void change_state(EmbeddedSystemXState* new_state);
	void change_sim_state(SimulateRealTimeState* new_state);
	void change_appmode_state(ApplicationModeSetting* new_state);

	const int VersionNo;
	const std::string Name;
	bool is_first_run;
	uint32_t last_errorNo;
};

