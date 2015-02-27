#include "Simulation.hpp"
#include "RealTimeExecution.hpp"
#include "UI.hpp"


Simulation::Simulation()
{
}

void Simulation::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Simulation entered." << std::endl;
}

void Simulation::RunRealTime(EmbeddedSystemX* context)
{
	change_sim_state(context, &RealTimeExecution::getInstance());
}


