#include "DiscreteThread.hpp"


DiscreteThread::DiscreteThread()
	:commandQueue(5), context("WILDSYSTEM"), running(true)
{
	start();
}

void DiscreteThread::run()
{
	while (running)
	{
		auto cmd = commandQueue.get();
		context.HandleEvent(cmd.get());
	}
}

void DiscreteThread::stop()
{
	running = false;
}

void DiscreteThread::add_command(Command* cmd)
{
	std::shared_ptr<Command> ptr(cmd);
	commandQueue.put(ptr);
}