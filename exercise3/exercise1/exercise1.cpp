#include "EmbeddedSystemX.hpp"

#include "Restart.hpp"
#include "Configure.hpp"
#include "Start.hpp"
#include "chMode.h"
#include "Suspend.hpp"
#include "Resume.hpp"
#include "Stop.hpp"
#include "Exit.h"

int main(int argc, const char* argv)
{
	EmbeddedSystemX system("EmbeddedSystemX");
	
	Restart restartcmd;
	Configure confcmd;
	Start startcmd;
	chMode chmodecmd;
	Suspend suspendcmd;
	Resume resumecmd;
	Stop stopcmd;
	Exit exitcmd;

	system.HandleEvent(&restartcmd);
	system.HandleEvent(&confcmd);
	system.HandleEvent(&startcmd);
	system.HandleEvent(&chmodecmd);
	system.HandleEvent(&suspendcmd);
	system.HandleEvent(&resumecmd);
	system.HandleEvent(&chmodecmd);
	system.HandleEvent(&chmodecmd);
	system.HandleEvent(&stopcmd);
	system.HandleEvent(&exitcmd);
}
