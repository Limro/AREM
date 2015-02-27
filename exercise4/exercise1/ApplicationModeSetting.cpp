#include "ApplicationModeSetting.hpp"
#include "UI.hpp"

void ApplicationModeSetting::chMode(EmbeddedSystemX* context)
{
	default_event_impl();
}

void ApplicationModeSetting::default_event_impl()
{
	UI::out() << "Warning: Current state does not handle this event!" << std::endl;
}