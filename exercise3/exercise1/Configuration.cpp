#include "Configuration.hpp"
#include "EmbeddedSystemX.hpp"
#include "Ready.hpp"
#include "PowerOnSelfTest.hpp"
#include "UI.hpp"

Configuration::Configuration()
{
}


Configuration::~Configuration()
{
}

void Configuration::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Configuration entered." << std::endl;

	readConfigurationInfo(context);
}

void Configuration::ConfigurationEnded(EmbeddedSystemX* context)
{
	change_state(context, &Ready::getInstance());
}

void Configuration::readConfigurationInfo(EmbeddedSystemX* context)
{
	PerformConfigurationX(context);
}

void Configuration::PerformConfigurationX(EmbeddedSystemX* context)
{
	ConfigurationEnded(context);
}
