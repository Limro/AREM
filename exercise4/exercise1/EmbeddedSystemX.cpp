#include "EmbeddedSystemX.hpp"
#include "ApplicationModeSetting.hpp"
#include "SimulateRealTimeState.hpp"

#include "PowerOnSelfTest.hpp"
#include "RealTimeExecution.hpp"
#include "Mode1.hpp"

EmbeddedSystemX::EmbeddedSystemX(const std::string& name)
	:Name(name), VersionNo(1), is_first_run(true), last_errorNo(0), 
	_state(nullptr), _appmode_state(nullptr), _sim_state(nullptr), 
	commandQueue(5), running(true)
{
	change_state(&PowerOnSelfTest::getInstance());
	start();
}

void EmbeddedSystemX::run()
{
	while (running)
	{
		auto cmd = commandQueue.get();
		HandleEvent(cmd.get());
	}
}

void EmbeddedSystemX::stop()
{
	running = false;
	continuousThread.stop();
}

void EmbeddedSystemX::add_command(Command* cmd)
{
	std::shared_ptr<Command> ptr(cmd);
	commandQueue.put(ptr);
}

EmbeddedSystemX::~EmbeddedSystemX()
{
}

ContinuousThread* EmbeddedSystemX::get_continuousThread()
{
	return &continuousThread;
}

void EmbeddedSystemX::change_state(EmbeddedSystemXState* new_state)
{
	if (_state != nullptr)
		_state->exit_state(this);

	_state = new_state;

	if (_state != nullptr)
		_state->enter_state(this);
}

void EmbeddedSystemX::change_sim_state(SimulateRealTimeState* new_state)
{
	if (_sim_state != nullptr)
		_sim_state->exit_state(this);

	_sim_state = new_state;

	if (_sim_state != nullptr)
		_sim_state->enter_state(this);
}

void EmbeddedSystemX::change_appmode_state(ApplicationModeSetting* new_state)
{
	if (_appmode_state != nullptr)
		_appmode_state->exit_state(this);

	_appmode_state = new_state;

	if (_appmode_state != nullptr)
		_appmode_state->enter_state(this);
}

SimulateRealTimeState* EmbeddedSystemX::get_sim_state()
{
	return _sim_state;
}

ApplicationModeSetting* EmbeddedSystemX::get_appmode_state()
{
	return _appmode_state;
}

void EmbeddedSystemX::HandleEvent(Command* eventCommand)
{
	eventCommand->excecute(this, _state);
}

int EmbeddedSystemX::get_VersionNo()
{ 
	return VersionNo; 
}

const std::string& EmbeddedSystemX::get_Name() 
{ 
	return Name; 
}

bool EmbeddedSystemX::get_is_first_run()
{ 
	return is_first_run; 
}

void EmbeddedSystemX::set_is_first_run(bool is_first_run)
{ 
	this->is_first_run = is_first_run; 
}

uint32_t EmbeddedSystemX::get_last_errorNo()
{ 
	return last_errorNo; 
}

void EmbeddedSystemX::set_last_errorNo(uint32_t last_errorNo)
{ 
	this->last_errorNo = last_errorNo; 
}