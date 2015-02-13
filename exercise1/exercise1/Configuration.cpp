#include "Configuration.hpp"
#include "EmbeddedSystemX.hpp"
#include "Ready.hpp"
#include "PowerOnSelfTest.hpp"

Configuration::Configuration()
{
}


Configuration::~Configuration()
{
}

void Configuration::enter_state(EmbeddedSystemX* context)
{
	std::cout << "Configuration entered." << std::endl;

	readConfigurationInfo(context);
}

void Configuration::ConfigurationEnded(EmbeddedSystemX* context)
{
	change_state(context, &Ready::getInstance());
}

void Configuration::Restart(EmbeddedSystemX* context)
{
	change_state(context, &PowerOnSelfTest::getInstance());
}

void Configuration::readConfigurationInfo(EmbeddedSystemX* context)
{
	PerformConfigurationX(context);
}

void Configuration::PerformConfigurationX(EmbeddedSystemX* context)
{
	ConfigurationEnded(context);
}
