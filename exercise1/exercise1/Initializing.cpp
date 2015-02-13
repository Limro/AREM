#include "Initializing.hpp"


Initializing::Initializing()
{
}


Initializing::~Initializing()
{
}

void Initializing::enter_state(EmbeddedSystemX*)
{
	std::cout << "Entering Initializing." << std::endl;
}

void Initializing::Initialized(EmbeddedSystemX*)
{

}