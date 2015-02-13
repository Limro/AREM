#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"

void EmbeddedSystemXState::Restart(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::SelfTestFailed(EmbeddedSystemX*, uint32_t errorNo)
{
	default();
}

void EmbeddedSystemXState::SelfTestOk(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::Exit(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::Initialized(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::Configure(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::ConfigurationEnded(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::StartRun(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::Stop(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::Suspend(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::Resume(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::chMode(EmbeddedSystemX*)
{
	default();
}

void EmbeddedSystemXState::change_state(EmbeddedSystemX* context, EmbeddedSystemXState* new_state)
{
	context->change_state(new_state);
}

void EmbeddedSystemXState::default()
{
	std::cout << "Warning: Default event implementation used!" << std::endl;
}

EmbeddedSystemXState::~EmbeddedSystemXState()
{/* Empty destructor */}