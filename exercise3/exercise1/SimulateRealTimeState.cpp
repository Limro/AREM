#include "SimulateRealTimeState.hpp"
#include "UI.hpp"

void SimulateRealTimeState::RunRealTime(EmbeddedSystemX*)
{
	default_event_impl();
}

void SimulateRealTimeState::Simulate(EmbeddedSystemX*)
{
	default_event_impl();
}

void SimulateRealTimeState::default_event_impl()
{
	UI::out() << "Warning: Current state does not handle this event!" << std::endl;
}

void SimulateRealTimeState::change_state(EmbeddedSystemX* context, SimulateRealTimeState* new_state)
{
	context->change_sim_state(new_state);
}
