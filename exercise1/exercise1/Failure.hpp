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
private:
	Failure();
	~Failure() override;
	Failure(Failure const&) = delete;
	void operator=(Failure const&) = delete;
};