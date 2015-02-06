#pragma once

#include "EmbeddedSystemX.hpp"
#include <iostream>

class EmbeddedSystemXState
{
public:
	virtual void Restart(EmbeddedSystemX*){ default(); }
	virtual void SelfTestFailed(EmbeddedSystemX*){ default(); }
	virtual void SelfTestOk(EmbeddedSystemX*){ default(); }
	virtual void Exit(EmbeddedSystemX*){ default(); }
	virtual void Initialized(EmbeddedSystemX*){ default(); }
	virtual void Configure(EmbeddedSystemX*){ default(); }
	virtual void ConfigurationEnded(EmbeddedSystemX*){ default(); }
	virtual void StartRun(EmbeddedSystemX*){ default(); }
	virtual void Stop(EmbeddedSystemX*){ default(); }
	virtual void Suspend(EmbeddedSystemX*){ default(); }
	virtual void Resume(EmbeddedSystemX*){ default(); }
	virtual void chMode(EmbeddedSystemX*){ default(); }

	virtual void enter_state(EmbeddedSystemX*){ std::cout << "State entered." << std::endl; }
	virtual ~EmbeddedSystemXState(){}

private:
	void default()
	{
		std::cout << "Warning: Default event implementation used!" << std::endl;
	}
};

