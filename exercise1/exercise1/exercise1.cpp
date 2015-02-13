#include <iostream>

#include "EmbeddedSystemX.hpp"

int main(int argc, const char* argv)
{
	EmbeddedSystemX system("Test system");

	system.Restart();
	system.Configure();
	system.StartRun();
	system.chMode();
	system.Suspend();
	system.Resume();
	system.chMode();
	system.chMode();
}