#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"
#include "UI.hpp"

void EmbeddedSystemXState::Restart(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::SelfTestFailed(EmbeddedSystemX*, uint32_t errorNo)
{
	default_event_impl();
}

void EmbeddedSystemXState::SelfTestOk(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::Exit(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::Initialized(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::Configure(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::ConfigurationEnded(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::StartRun(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::Stop(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::Suspend(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::Resume(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::chMode(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::change_state(EmbeddedSystemX* context, EmbeddedSystemXState* new_state)
{
	context->change_state(new_state);
}

void EmbeddedSystemXState::default_event_impl()
{
	UI::out() << "Warning: Current state does not handle this event!" << std::endl;
}

EmbeddedSystemXState::~EmbeddedSystemXState()
{/* Empty destructor */}