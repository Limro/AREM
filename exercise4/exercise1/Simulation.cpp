#include "Simulation.hpp"
#include "RealTimeExecution.hpp"
#include "UI.hpp"
#include "EmbeddedSystemX.hpp"


Simulation::Simulation()
{
}

void Simulation::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Simulation entered." << std::endl;
	context->get_continuousThread()->set_sim_mode(this);
}

void Simulation::RunRealTime(EmbeddedSystemX* context)
{
	change_sim_state(context, &RealTimeExecution::getInstance());
}

std::string Simulation::get_input()
{
	return "SIM INPUT!";
}

void Simulation::output_result(std::string result)
{
	UI::out() << "SIM RESULT: " << result << std::endl;
}

