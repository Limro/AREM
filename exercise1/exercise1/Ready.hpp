#pragma once

#include "Operational.hpp"

class Ready : public Operational
{
public:
	static Ready& getInstance()
	{
		static Ready instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}

	void enter_state(EmbeddedSystemX*) override;

	void Restart(EmbeddedSystemX*) override;
	void StartRun(EmbeddedSystemX*) override;
	void Configure(EmbeddedSystemX*) override;	

private:
	Ready();
	~Ready() override;
	Ready(Ready const&) = delete;
	void operator=(Ready const&) = delete;
};