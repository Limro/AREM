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

void EmbeddedSystemXState::RunRealTime(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::Simulate(EmbeddedSystemX*)
{
	default_event_impl();
}

void EmbeddedSystemXState::default_event_impl()
{
	UI::out() << "Warning: Current state does not handle this event!" << std::endl;
}