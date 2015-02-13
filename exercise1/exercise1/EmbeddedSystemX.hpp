#pragma once

#include "EmbeddedSystemXState.hpp"

#include <cstdint>
#include <string>
#include "Command.hpp"

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
	friend class EmbeddedSystemXState;

	void change_state(EmbeddedSystemXState* new_state);

	const int VersionNo;
	const std::string Name;
	bool is_first_run;
	uint32_t last_errorNo;
};

