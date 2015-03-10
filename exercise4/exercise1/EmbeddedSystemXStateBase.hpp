#pragma once

class EmbeddedSystemX;
class EmbeddedSystemXState;
class SimulateRealTimeState;
class ApplicationModeSetting;

class EmbeddedSystemXStateBase
{
public:
	virtual void enter_state(EmbeddedSystemX*) = 0; //abstract
	virtual void exit_state(EmbeddedSystemX*){}
	virtual ~EmbeddedSystemXStateBase();
protected:
	void change_state(EmbeddedSystemX*, EmbeddedSystemXState*);
	void change_sim_state(EmbeddedSystemX*, SimulateRealTimeState*);
	void change_appmode_state(EmbeddedSystemX*, ApplicationModeSetting*);
	SimulateRealTimeState* get_sim_state(EmbeddedSystemX*);
	ApplicationModeSetting* get_appmode_state(EmbeddedSystemX*);
};

