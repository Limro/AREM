#include "EmbeddedSystemXStateBase.hpp"
#include "EmbeddedSystemX.hpp"

EmbeddedSystemXStateBase::~EmbeddedSystemXStateBase()
{
}

void EmbeddedSystemXStateBase::change_state(EmbeddedSystemX* context, EmbeddedSystemXState* new_state)
{
	context->change_state(new_state);
}

void EmbeddedSystemXStateBase::change_sim_state(EmbeddedSystemX* context, SimulateRealTimeState* new_state)
{
	context->change_sim_state(new_state);
}

void EmbeddedSystemXStateBase::change_appmode_state(EmbeddedSystemX* context, ApplicationModeSetting* new_state)
{
	context->change_appmode_state(new_state);
}

SimulateRealTimeState* EmbeddedSystemXStateBase::get_sim_state(EmbeddedSystemX* context)
{
	return context->get_sim_state();
}

ApplicationModeSetting* EmbeddedSystemXStateBase::get_appmode_state(EmbeddedSystemX* context)
{
	return context->get_appmode_state();
}