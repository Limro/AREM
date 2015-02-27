#include "RealTimeExecution.hpp"
#include "Simulation.hpp"
#include "UI.hpp"

void RealTimeExecution::Simulate(EmbeddedSystemX* context)
{
	change_sim_state(context, &Simulation::getInstance());
}

void RealTimeExecution::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "RealTimeExecution entered." << std::endl;
}

RealTimeExecution::RealTimeExecution()
{
}