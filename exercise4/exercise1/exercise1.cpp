#include "EmbeddedSystemX.hpp"

#include "Restart.hpp"
#include "Configure.hpp"
#include "Start.hpp"
#include "chMode.h"
#include "Suspend.hpp"
#include "Resume.hpp"
#include "Stop.hpp"
#include "Exit.h"
#include "Simulate.hpp"
#include "RunRealTime.hpp"

#include <iostream>

int main(int argc, const char* argv)
{
	EmbeddedSystemX system("systemX");

	char input = 0;
	bool running = true;
	Command* cmd = nullptr;

	while (running)
	{
		std::cin >> input;

		switch (input)
		{
		case '1':
			cmd = new Restart;
			break;
		case '2':
			cmd = new Configure;
			break;
		case '3':
			cmd = new Start;
			break;
		case '4':
			cmd = new chMode;
			break;
		case '5':
			cmd = new Suspend;
			break;
		case '6':
			cmd = new Resume;
			break;
		case '7':
			cmd = new Stop;
			break;
		case '8':
			cmd = new Exit;
			break;
		case '9':
			cmd = new RunRealTime;
			break;
		case '0':
			cmd = new Simulate;
			break;
		default:
			running = false;
			continue;
		}

		system.add_command(cmd);
	}

	system.stop();
}
