#include "Initializing.hpp"
#include "EmbeddedSystemX.hpp"
#include "Ready.hpp"
#include "UI.hpp"

Initializing::Initializing()
{
}


Initializing::~Initializing()
{
}

void Initializing::enter_state(EmbeddedSystemX* context)
{
	UI::out() << "Initializing entered." << std::endl;
	startInitializing(context);
}

void Initializing::startInitializing(EmbeddedSystemX* context)
{
	Initialized(context);
}

void Initializing::Initialized(EmbeddedSystemX* context)
{
	change_state(context, &Ready::getInstance());
}