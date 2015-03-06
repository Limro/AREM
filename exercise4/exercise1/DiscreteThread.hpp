#pragma once

#include "Thread.hpp"
#include "Queue.hpp"
#include "Command.hpp"
#include "EmbeddedSystemX.hpp"

#include <memory>

class DiscreteThread : public abstractOS::Thread
{
public:
	DiscreteThread();
	void run() override;
	void stop();

	void add_command(Command* cmd);

private:
	abstractOS::Queue<std::shared_ptr<Command>> commandQueue;
	EmbeddedSystemX context;
	bool running;
};

