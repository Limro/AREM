#include "RealTimeExecution.hpp"
#include "Simulation.hpp"
#include "UI.hpp"
#include "EmbeddedSystemX.hpp"

void RealTimeExecution::Simulate(EmbeddedSystemX* context)
{
	change_sim_state(context, &Simulation::getInstance());
}

void RealTimeExecution::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "RealTimeExecution entered." << std::endl;
	context->get_continuousThread()->set_sim_mode(this);
}

std::string RealTimeExecution::get_input()
{
	return "REAL INPUT!";
}

void RealTimeExecution::output_result(std::string result)
{
	UI::out() << "REAL RESULT: " << result << std::endl;
}

RealTimeExecution::RealTimeExecution()
{
}