#pragma once

#include "EmbeddedSystemXState.hpp"

class Failure : public EmbeddedSystemXState
{
public:
	static Failure& getInstance()
	{
		static Failure instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}

	void enter_state(EmbeddedSystemX*) override;

	void Restart(EmbeddedSystemX*) override;
private:
	void display(uint32_t errorNo);

	Failure();
	~Failure() override;
	Failure(Failure const&) = delete;
	void operator=(Failure const&) = delete;
};