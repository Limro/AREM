#pragma once

#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"

class PowerOnSelfTest : public EmbeddedSystemXState
{
public:
	static PowerOnSelfTest& getInstance()
	{
		static PowerOnSelfTest instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}

	void enter_state(EmbeddedSystemX*) override; //systemSelfTest
	void SelfTestOk(EmbeddedSystemX*) override;
	void SelfTestFailed(EmbeddedSystemX*) override;
	
private:
	PowerOnSelfTest();
	~PowerOnSelfTest() override;
	PowerOnSelfTest(PowerOnSelfTest const&) = delete;
	void operator=(PowerOnSelfTest const&) = delete;
};