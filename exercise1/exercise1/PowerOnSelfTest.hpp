#pragma once

#include "EmbeddedSystemXState.hpp"
#include "EmbeddedSystemX.hpp"

#include <cstdint>

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
	void SelfTestFailed(EmbeddedSystemX* context, uint32_t errorNo) override;
	
private:
	void perform_selftest(EmbeddedSystemX* context);

	PowerOnSelfTest();
	~PowerOnSelfTest() override;
	PowerOnSelfTest(PowerOnSelfTest const&) = delete;
	void operator=(PowerOnSelfTest const&) = delete;
};